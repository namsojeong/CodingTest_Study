#include<iostream>
#include<algorithm>
using namespace std;

int DP[101][100001];
int w[101];
int v[101];
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++) cin >> w[i] >> v[i];

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= k; j++)
		{
			// i의 무게가 초과하면
			if (w[i] > j)
			{
				DP[i][j] = DP[i - 1][j]; // 물건을 i-1까지만 담았을 떄 가치
			}
			else
			{
				DP[i][j] = max(DP[i-1][j], DP[i-1][j - w[i]] + v[i]); // 아이템 i를 담았을 떄 물건 I를 담지않았을 때 가치 중 큰 값
			}
		}
	}

	cout << DP[n][k];
}