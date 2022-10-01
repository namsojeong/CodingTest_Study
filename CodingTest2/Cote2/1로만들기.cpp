#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int X;
int cnt = 0;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> X;

	while (X > 1)
	{
		if (X % 3 == 0)
			X /= 3;
		else if (X % 2 == 0)
			X /= 2;
		//else if (X - 1 > 1 && ((X - 1) % 2 == 0 || (X - 1) % 3 == 0))
		else
			X -= 1;
		cnt++;
	}

	cout << cnt;
}