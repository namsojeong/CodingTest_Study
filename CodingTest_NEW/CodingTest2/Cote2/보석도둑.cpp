#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int n, k, c, m, v, sum=0;
vector<pair<int, int>> jew;
vector<int> vec;

bool comp(pair<int, int> a, pair<int, int> b)
{
	if (a.second == b.second) return a.first > b.first;
	else return a.second > b.second;
}

bool desc(int a, int b)
{
	return a > b;
}
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n>>k;
	for (int i = 0; i < n; i++)
	{
		cin >> m >> v;
		jew.push_back({ m, v });
	}
	for (int i = 0; i < k; i++)
	{
		cin >> c;
		vec.push_back(c);
	}
	sort(jew.begin(), jew.end(), comp);
	sort(vec.begin(), vec.end(), desc);

	int maxVal = 0;
	while (!vec.empty())
	{
		int bag = vec.back();
		vec.pop_back();
		for (int j = 0; j < jew.size(); j++)
		{
			if (jew[j].first <= bag)
			{
				maxVal = maxVal < jew[j].second ? jew[j].second : maxVal;
			}
		}
		sum += maxVal;
		maxVal = 0;
	}

	cout << sum;
}