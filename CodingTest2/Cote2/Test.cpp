#include<iostream>

using namespace std;
int n;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 0; i <n; i++)
	{
		for (int j = n-i; j >0; j--)
		{
			cout << "*";
		}
		cout << '\n';
	}
	
}