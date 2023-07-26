#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int n, m;
int result=0;
vector<int> v;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		v.push_back(temp);
	}

	int maxNum = 0;
	sort(v.rbegin(), v.rend());
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)continue;
			for (int k = 0; k < n; k++)
			{
				if (j == k || i==k)continue;
				result = v[i] + v[j] + v[k];
				if (result > maxNum && result<=m) maxNum = result;
			}
		}
	}

	cout << maxNum;
}