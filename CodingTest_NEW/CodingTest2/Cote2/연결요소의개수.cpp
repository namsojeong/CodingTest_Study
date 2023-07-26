#include<iostream>
#include<vector>

using namespace std;
const int MAX = 100;

int dy[4] = { -1, 0, 1, 0 };
int dx[4] = { 0, 1, 0, -1 };
int a[MAX][MAX] = { 0, }, visited[MAX][MAX];
int n, m, k, t;
int x, y, ny, nx;
int ans = 0;

void DFS(int y, int x)
{
	visited[y][x] = 1;
	for (int i = 0; i < 4; i++) {
		ny = y + dy[i];
		nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= n || nx >= m || a[ny][nx] == 0) continue;
		if (visited[ny][nx] == 0 && a[ny][nx] == 1)
		{
			DFS(ny, nx);
		}
	}
}
int main()
{
	fill_n(a[0], 100 * 100, 0);
	fill(&visited[0][0], &visited[0][0] + 100 * 100, 0);

	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> x >> y;
		a[y][x] = 1;
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] == 1 && visited[i][j] == 0)
			{
				cout << "X : " << j << " Y : " << i << endl;
				DFS(i, j);
				ans++;
			}
		}
	}
	cout << ans << endl;
}