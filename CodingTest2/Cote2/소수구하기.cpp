#include<iostream>

using namespace std;

bool isS = false;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b;
	cin >> a >> b;

	for (int i = a; i <= b; i++)
	{
		for (int j = 2; j < i; j++)
		{
			isS = false;
			if (i % j == 0&&i!=j)break;
			isS = true;
		}
		if (isS)
		{
			cout << i << '\n';
		}
	}
}