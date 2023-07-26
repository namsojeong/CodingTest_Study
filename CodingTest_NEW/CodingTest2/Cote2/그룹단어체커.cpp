#include <iostream>
#include <set>
using namespace std;

int n, cnt = 0;

string str;
set<char> s;

int main() {
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> str;
		s.clear();
		char c = str[0];
		for (int j = 0; j < str.length(); j++)
		{
			if (s.find(str[j]) != s.end() && c != str[j]) break;
			else
			{
				s.insert(str[j]);
				c = str[j];
			}

			if (j == str.length()-1) cnt++;
		}
	}

	cout << cnt;

}