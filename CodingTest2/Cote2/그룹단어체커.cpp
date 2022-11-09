#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<char, int> m;
int n, cnt = 0;

int main() {
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;

		pair <char, int> beforepair;
		bool isCor = true;
		for (int j = 0; j < str.length(); j++)
		{
			if (j == 0)
			{
				m.insert({ str[j], j });
				beforepair.first = str[j];
				beforepair.second = j;
				continue;
			}

			if (str[j] == beforepair.first)
			{
				if ((j - beforepair.second) > 1)
				{
					isCor = false;
					break;
				}
				else
				{
					m.insert({ str[j], j });
				}
			}
		}

		if(isCOr )

}