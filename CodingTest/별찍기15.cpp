#include<iostream>

using namespace std;
int n, m=1;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int j = 0; j < n - 1; j++) cout << " ";
	cout << "*\n";
	
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n-i-1; j++) cout << " ";
		cout << "*";
		for (int j = 0; j < m; j++) cout << " ";
		m += 2;
		cout << "*";
		if (i == n - 1)break;
		cout << "\n";
	}
}