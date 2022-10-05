#include<iostream>

using namespace std;

int a, b;
int r = 1;
bool isFind = false;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		r = 1;
		cin >> a >> b;

		if (a > b) swap(a, b);

		while (a > 1 && b > 1)
		{
			isFind = false;
			for (int i = 2; i <= a; i++)
			{
				if (a % i == 0 && b % i == 0)
				{
					isFind = true;
					a /= i;
					b /= i;
					r *= i;
					break;
				}
				else isFind = false;
			}
			if (!isFind) break;
		}
		cout << r * a * b<<'\n';
	}
	
}