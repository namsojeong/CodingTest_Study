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
			// i�� ���԰� �ʰ��ϸ�
			if (w[i] > j)
			{
				DP[i][j] = DP[i - 1][j]; // ������ i-1������ ����� �� ��ġ
			}
			else
			{
				DP[i][j] = max(DP[i-1][j], DP[i-1][j - w[i]] + v[i]); // ������ i�� ����� �� ���� I�� �����ʾ��� �� ��ġ �� ū ��
			}
		}
	}

	cout << DP[n][k];
}