#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    map<string, int> m;

    for (int i = 0; i < participant.size(); i++)
    {
        ++m[participant[i]];
        if (i != participant.size() - 1)
        {
            --m[completion[i]];
            if (m[completion[i]] <= 0) m.erase(completion[i]);
        }
    }

    answer = m.begin()->first;
    return answer;
}