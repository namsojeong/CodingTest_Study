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
		for (int j = 0; j < ((n - i) * 2)-1; j++) cout << "*";
		if (i == n - 1)	break;
		cout << '\n';
	}
}