#include<iostream>

using namespace std;
int n;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		char c1 = ' ';
		char c2 = '*';
		if (i % 2 != 0)
		{
			c1 = '*';
			c2 = ' ';
		}
		for (int j = 1; j <= n*2; j++)
		{
			if (j % 2 != 0)cout << c1;
			else cout << c2;
		}
		if (i == n)break;
		cout << '\n';
	}
}