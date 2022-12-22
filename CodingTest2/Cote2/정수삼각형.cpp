#include <iostream>
#include <set>
using namespace std;

int n, temp;
int arr[501][501];
int num[501][501] = {0,};
int maxNum = 0;
set<int> v;
void solution(int y, int x, int r)
{
	if (y > n)
	{
		v.insert(r);
		return;
	}
	if (num[y][x] == 0)
	{
		num[y][x] = r + arr[y][x];
	}

	solution(y + 1, x, r + arr[y][x]);
	solution(y + 1, x + 1, r + arr[y][x]);

}
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 1; i <= n; i++)
		for (int j = 0; j < i; j++) cin >> arr[i][j];

	solution(1, 0, 0);
	set<int>::iterator it = v.end();
	cout << *(--it);
}