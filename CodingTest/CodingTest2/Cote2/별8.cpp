#include<iostream>

using namespace std;
int n;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < n-i; j++)	cout << " ";
		for (int j = 0; j < ((i * 2) - 1); j++) cout << "*";
		cout << '\n';
	}
	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j < n - i; j++)	cout << " ";
		for (int j = 0; j < ((i * 2) - 1); j++) cout << "*";
		if (i == n)break;
		cout << '\n';
	}
}