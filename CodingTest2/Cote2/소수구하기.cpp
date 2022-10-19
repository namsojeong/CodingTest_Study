#include<iostream>

using namespace std;

int a, b, n;
bool isS = false;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> a >> b;
	n = a;
	while (n <= b)
	{
		for (int j = 2; j < n; j++)
		{
			isS = false;
			if (n % j == 0 && n != j) break;
			isS = true;
		}
		if (isS) cout << n << '\n';
		n++;
	}
}