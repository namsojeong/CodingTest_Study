#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<string> r;
vector<string> vecString;
vector<int> vecInt;
int n, m;
string str;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> str;
		vecInt.push_back(i + 1);
		vecString.push_back(str);
	}
	for (int i = 0; i < m; i++)
	{
		cin >> str; 
		r.push_back(str);
	}
	for (int i = 0; i < m; i++)
	{
		string s = r[i];
		if (atoi(s.c_str()) == 0)
		{
			vector<string>::iterator iter = find(vecString.begin(), vecString.end(), s);
			cout << distance(vecString.begin(), iter)+1<<'\n';
		}
		else
		{
			cout << vecString[atoi(s.c_str())-1] << '\n';
		}
	}
}