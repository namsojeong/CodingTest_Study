#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> v;
int n, m, temp, cnt=0;
int arr[9][9];
int dx[4] = { 0, -1, 0, 1 };
int dy[4] = { 1, 0, -1, 0 };
bool visited[9][9] = { false, };

void dfs(int y, int x)
{
	visited[y][x] = true;
	arr[y][x] = 2;
	
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx<0||ny<0||nx>=m||ny>=n) continue;
		if (visited[ny][nx] || arr[ny][nx] == 1) continue;
		dfs(ny, nx);
	}
}
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);  cout.tie(NULL);

	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 2)	v.push_back({ i, j });
		}
	}

	for (int i = 0; i < v.size(); i++)
	{
		int y = v[i].first;
		int x = v[i].second;
		dfs(y, x);
	}

	cout << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << " ";
			if (arr[i][j] == 0)
			{
				cnt++;
			}
		}
		cout << "\n";
	}
	cout << endl;
	cout << cnt;
}