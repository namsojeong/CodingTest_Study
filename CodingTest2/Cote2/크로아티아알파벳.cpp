#include<iostream>
using namespace std;

string str;
int cnt = 0, i = 0;
int IsCor(int index, char c)
{
	cnt++;
	switch (c)
	{
	case 'c':
		if (str[index + 1] == '=' || str[index + 1] == '-') return 2; break;
	case 'd':
		if (str[index + 1] == 'z' && str[index + 2] == '=')	return 3;
		else if (str[index + 1] == '-')	return 2; break;
	case 'l':
		if (str[index + 1] == 'j') return 2; break;
	case 'n':
		if (str[index + 1] == 'j') return 2; break;
	case 's':
		if (str[index + 1] == '=') return 2; break;
	case 'z':
		if (str[index + 1] == '=') return 2; break;
	}
	return 1;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> str;
	while (i < str.length()) i += IsCor(i, str[i]);
	cout << cnt;
}