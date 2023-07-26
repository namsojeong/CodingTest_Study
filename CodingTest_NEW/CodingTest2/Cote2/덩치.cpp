#include<iostream>
#include<vector>
using namespace std;

int n;
int k, w;
vector<pair<int, int>> v;

int ranking(int index)
{
	int cnt = 1;
	for (int i = 0; i < n; i++)
	{
		if (index == i) continue;
		if (v[index].first < v[i].first && v[index].second < v[i].second)
		{
			cnt++;
		}
	}
	return cnt;
}
int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> w >> k;
		v.push_back({ w, k });
	}

	for (int i = 0; i < n; i++)
	{
		cout<< ranking(i) << '\n';
	}
}