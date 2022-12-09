#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int dy[4] = { -1, 0, 1 , 0}, dx[4] = { 0, 1, 0, -1 };
bool visited[26][26] = {false, };
string str;
int arr[26][26];
int n, cnt=0;
vector<int> v;

void dfs(int y, int x)
{
	visited[y][x] = true;

	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= n || nx >= n || visited[ny][nx] || arr[ny][nx] == 0)continue;
		dfs(ny, nx);
	}
	cnt++;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		for (int j = 0; j < n; j++)	arr[i][j] = str[j] - 48;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (visited[i][j] == false && arr[i][j] == 1)
			{
				cnt = 0;
				dfs(i, j);
				v.push_back(cnt);
			}
		}
	}
	
	sort(v.begin(), v.end());
	cout << v.size();
	for (int i = 0; i < v.size(); i++)
	{
		cout << '\n' << v[i];
	}
}