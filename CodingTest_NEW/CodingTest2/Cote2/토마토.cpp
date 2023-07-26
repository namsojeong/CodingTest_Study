#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> vec[1001];
vector<pair<int, int>> v;
queue<pair<int, int>> q;
int n, m, day = 0;

int dy[8] = { 0, 0, 1, -1, -1, -1, 1, -1 };
int dx[8] = { 1, -1, 0, 0, -1, 1, 1, 1 };

void bfs(int y, int x)
{
	q.push({ y, x });
	while (!q.empty())
	{
		cout << endl;
		day++;

		cout << "DAY : " << day << endl;
		int curY = q.front().first;
		int curX = q.front().second;
		q.pop();

		cout << "X: " << curX << " Y: " << curY << endl;
		
		for (int i = 0; i < 8; i++)
		{
			int nextY = dy[i] + curY;
			int nextX = dx[i] + curX;
			if (nextY<0 || nextX<0 || nextY>=m || nextX>=n)continue;
			if (vec[nextY][nextX] == 0)
			{
				q.push({ nextY, nextX });
				vec[nextY][nextX] = 1;
			}
		}
		
	}
}
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int temp;
			cin >> temp;
			if (temp == 1)
			{
				v.push_back({ i, j });
			}
			vec[i].push_back(temp);
		}
	}

	for (int i = 0; i < v.size(); i++)
	{
		bfs(v[i].first, v[i].second);
	}

	cout << endl << endl;
	cout << day;

}