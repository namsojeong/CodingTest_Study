#include<iostream>
#include<queue>
using namespace std;

#define MAX 100

int n, k, cnt=0;
int dy[4] = { -1, 0, 1, 0 };
int dx[4] = { 0, 1, 0, -1 };
int visited[MAX][MAX];
int minNum = 100000;
queue<pair<int, int>> q;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> k;

	while (n != k)
	{
		if (k/2 >= n)
		{
			n *= 2;
		}
		else
		{
			
		}
		cnt++;
	}

	cout << cnt;
}
