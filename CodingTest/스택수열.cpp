#include<iostream>

using namespace std;

int n;
int arr[100001];
int last=0;
int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		while (last != arr[i])
		{
			if (last < arr[i])
			{
				last++;
				cout << '+' << '\n';
			}
			else
			{
				last--;
				cout << '-' << '\n';
			}
		}
	}
}