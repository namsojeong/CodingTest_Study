#include<iostream>
#include<string>
#include<vector>

using namespace std;
string str; int cnt = 0;
vector<string> vecStr;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	while (true)
	{
		getline(cin, str);
		if (str == "#")	break;
		vecStr.push_back(str);
	}

	for (int i = 0; i < vecStr.size(); i++)
	{
		cnt = 0;
		for (int j = 0; j < vecStr[i].size(); j++)
		{
			if (vecStr[i][j] == 'a' || vecStr[i][j] == 'e' || vecStr[i][j] == 'i' || vecStr[i][j] == 'o' || vecStr[i][j] == 'u' ||
				vecStr[i][j] == 'A' || vecStr[i][j] == 'E' || vecStr[i][j] == 'I' || vecStr[i][j] == 'O' || vecStr[i][j] == 'U'
				) cnt++;
		}
		cout << cnt<<'\n';
	}

	return 0;
}