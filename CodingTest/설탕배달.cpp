#include<iostream>

using namespace std;
int n;
int cnt = 0;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	int temp = n;

	if (n < 5)
	{
		if (n % 3 == 0)cout << 1;
		else cout << -1;
	}
	else
	{
		cnt += temp / 5;
		temp %= 5;
		if (temp == 0)
		{
			cout << cnt;
		}
		else if (temp < 3)
		{
			cout << -1;
		}
		else
		{
			cnt += temp / 3;
			temp %= 3;
			if (temp == 0)cout << cnt;
			else cout << -1;
		}
	}

	

}