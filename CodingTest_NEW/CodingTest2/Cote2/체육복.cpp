#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> v;
    v.push_back(0);
    for (int i = 0; i < n; i++) v.push_back(0);
    v.push_back(0);
    for (int i = 0; i < lost.size(); i++) v[lost[i]]--;
    for (int i = 0; i < reserve.size(); i++) v[reserve[i]]++;
    

    for (int i = 1; i <= n; i++)
    {
        if (v[i] == 1)
        {
            if (v[i - 1] == -1) v[i - 1]++;
            else if (v[i + 1] == -1) v[i + 1]++;
            v[i]--;
        }
    }

    for (int i = 1; i <= n; i++) if (v[i] >= 0) answer++;
    return answer; 
}

int main()
{
    cout << solution(3, { 3 }, {1});
}