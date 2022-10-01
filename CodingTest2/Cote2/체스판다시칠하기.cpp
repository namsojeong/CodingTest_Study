#include<iostream>
#include<vector>

using namespace std;

int m, n;
char c;
int arr[4][4] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
char inputArr[51][51] = { };
int cnt=0 ;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0.; j < m; j++)
		{
			char temp;
			cin >> temp;
			inputArr[i][j] = temp;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			c = inputArr[i][j];
			for (int k = 0; k < 4; k++)
			{
				char tempC = inputArr[i + arr[k][0]][j + arr[k][1]];
				if (c == tempC)
				{
					cnt++;
					if (c == 'W')
					inputArr[i + arr[k][0]][j + arr[k][1]] = 'B';
					else
					inputArr[i + arr[k][0]][j + arr[k][1]] = 'W';
				}
			}
		}
	}
	cout << cnt;
}