#include<iostream>

using namespace std;
int n;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < n; j++)
		{
			if (j < n - i) cout << " ";
			else cout << "*";
		}
		cout << '\n';
	}
}