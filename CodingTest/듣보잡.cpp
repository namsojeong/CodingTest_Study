#include<iostream>
#include<set>

using namespace std;

int n, m;
string str;
set<string> s;
set<string> res;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> str;
		s.insert(str);
	}

	for (int i = 0; i < m; i++)
	{
		cin >> str;
		if (s.find(str) != s.end()) res.insert(*(s.find(str)));
	}

	cout << res.size() << '\n';

	set<string>::iterator rs = res.begin();
	for (rs; rs != res.end(); rs++)
	{
		cout << *rs << '\n';
	}

}