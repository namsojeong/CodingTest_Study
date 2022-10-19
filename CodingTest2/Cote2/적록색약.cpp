#include<iostream>
#include<vector>

using namespace std;
int n;
string str;
vector<string> v;
bool visited[101][101] = {false,};
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int r1=0, r2=0;

void dfs(int x, int y, char c)
{
	visited[y][x] = true;
	for (int i = 0; i < 4; i++)
	{
		int fx = x + dx[i];
		int fy = y + dy[i];

		if (fx<0 || fy<0 || fx>=n || fy>=n|| v[fy][fx] != c || visited[fy][fx]==true) continue;
		dfs(fx, fy, c);
	}
}

void dfs2(int x, int y, char c)
{
	visited[y][x] = true;
	for (int i = 0; i < 4; i++)
	{
		int fx = x + dx[i];
		int fy = y + dy[i];

		if (fx<0 || fy<0 || fx>=n || fy>=n||visited[fy][fx]==true) continue;
		if (v[fy][fx] == 'G' || v[fy][fx] == 'R')
		{
			if (c == 'G' || c == 'R')
			{
				dfs2(fx, fy, c);
				continue;
			}
		}
		if (v[fy][fx] == c)	dfs2(fx, fy, c);
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		v.push_back(str);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (visited[i][j]) continue;
			r1++;
			dfs(j, i, v[i][j]);
		}
	}

	fill(&visited[0][0], &visited[0][0] + 101 * 101, 0);
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (visited[i][j]) continue;
			r2++;
			dfs2(j, i, v[i][j]);
		}
	}
	
	cout << r1 << " "<<r2;
}