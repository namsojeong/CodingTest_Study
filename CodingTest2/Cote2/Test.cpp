#include <iostream>
using namespace std;

int n, cnt=0;
		int temp;
int main()
{
	cin >> n;

	for (int i = 0; i < 5; i++)
	{
		cin >> temp;
		if (temp == n) cnt++;
	}

	cout << cnt;
}