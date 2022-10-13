#include<iostream>

using namespace std;
int n;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = n-1; i >=0; i--)
	{
		for (int j = 0; j < i; j++) cout << " ";
		for (int j = 0; j < n - i; j++) cout << "*";
		for (int j = 0; j < n - i-1; j++) cout << "*";
		cout << '\n';
	}
	
}