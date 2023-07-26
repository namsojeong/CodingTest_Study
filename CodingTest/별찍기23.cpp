#include<iostream>

using namespace std;
int n;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)	cout << " ";
		for(int j=0;j<n;j++) cout << "*";
		for (int j = 0; j < (n-i) * 2 - 3; j++) cout << " ";
		for (int j = 0; j < n; j++)
		{
			if (i == n - 1 && j == n - 1) break;
			cout << "*";
		}
		cout << '\n';
	}
	
	for (int i = n-1; i >=0; i--)
	{
		for (int j = 0; j < i; j++)	cout << " ";
		for (int j = 0; j < n; j++)
		{
			char c = ' ';
			if (i == 0)c = '*';
			cout << c;
		}
		for (int j = 0; j < (n-i) * 2 - 3; j++) cout << " ";
		for (int j = 0; j < n; j++)
		{
			if (i == n - 1 && j == n - 1)break;
			cout << "*";
		}
		cout << '\n';
	}
}