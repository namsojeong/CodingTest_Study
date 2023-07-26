#include<iostream>

using namespace std;
int n;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < n - i; j++)	cout << " ";
		cout << "*";
		for (int k = 0; k < i*2-3; k++)
		{
			if (i == n) cout << "*";
			else cout << " ";
		}
		if(i>1)cout << "*";
		if (i == n) break;
		cout << '\n';
	}
}