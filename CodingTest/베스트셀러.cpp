#include <iostream>
#include <map>
using namespace std;

map<string, int> books;

int main()
{
    int len, max = 0;;
    string result;
    cin >> len;

    for (int i = 0; i < len; i++)
    {
        string str;
        cin >> str;
        books[str] += 1;
    }

    for (auto pair : books)
    {
        if (pair.second > max)
        {
            max = pair.second;
            result = pair.first;
        }
    }

    cout << result;
}