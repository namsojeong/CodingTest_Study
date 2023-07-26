#include<iostream>
using namespace std;

int m, n, total=0, minNum=-1;
bool isS=false;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> m >> n;
	minNum = n;
	for (int i = m; i <= n; i++)
	{
		for (int j = 2; j <= i; j++)
		{
			isS = false;
			if (i % j == 0 && i != j)break;
			isS = true;
		}
		if (isS)
		{
			if (minNum > i || minNum == -1) minNum = i;
			total += i;
		}
	}
	if (total == 0) cout << -1;
	else cout << total << '\n' << minNum;

}