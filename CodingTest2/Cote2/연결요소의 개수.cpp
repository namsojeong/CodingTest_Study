#include <iostream>
using namespace std;

int n, m, x, y, cnt = 0;
bool visited[10001] = {false, };
int arr[10001][10001] = { 0, };

void dfs(int a)
{
	visited[a] = true;
	for (int i = 1; i <= n; i++)
	{
		if (visited[i] || arr[a][i] == 0)continue;
		dfs(i);
	}
}
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> y >> x;
		arr[y][x] = 1;
		arr[x][y] = 1;
	}

	for (int i = 1; i <= n; i++)
	{
		if (visited[i] == false)
		{
			cnt++;
			dfs(i);
		}
	}
	cout << cnt;
}