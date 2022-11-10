#include<iostream>
#include<set>

using namespace std;

int n, m;
int num;
set<int> s;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		s.insert(num);
	}

	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> num;
		if (s.find(num) != s.end()) cout << 1 << ' ';
		else cout << 0 << ' ';
	}

}