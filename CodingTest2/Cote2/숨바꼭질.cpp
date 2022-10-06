#include<iostream>
using namespace std;

int n, k, cnt=0;
int minNum = 100000;
//
//void dfs(int a, int cnt)
//{
//	if (a > k)	return;
//	if (a == k)
//	{
//		if (minNum > cnt) minNum = cnt;
//		cout << minNum<<'\n';
//		return;
//	}
//	dfs(a * 2, cnt++);
//	dfs(a+1, cnt++);
//	dfs(a - 1, cnt++);
//}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> k;

	while (n != k)
	{
		if (n > k)
		{
			n -= 1;
		}
		else if (n < k)
		{
			if (n * 2 <= k)	n *= 2;
			else n += 1;
		}
		cnt++;
	}

	cout << cnt;
	//cout << minNum;
}