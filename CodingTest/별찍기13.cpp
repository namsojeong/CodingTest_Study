#include<iostream>

using namespace std;
int n; 

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)	cout << "*";
		cout << '\n';
	}
	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < i; j++) cout << "*";
		if (i == 1)break;
		cout << '\n';
	}
}