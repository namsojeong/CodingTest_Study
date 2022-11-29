#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int n, m;
long long sum = 0;
vector<int> vec;

bool Check(int mid)
{
	sum = 0;
	for (int i = 0; i < n; i++)	sum += vec[i] - mid > 0 ? vec[i] - mid : 0;
	return sum >= m;
}
int main()
{
	cin >> n >> m;

	int temp;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		vec.push_back(temp);
	}
	sort(vec.begin(), vec.end());

	int left = 0, right = 1000000000, mid = 0;

	while (left + 1 < right)
	{
		mid = (left + right) / 2;
		if (Check(mid))	left = mid;
		else right = mid;
	}

	cout << left;
}