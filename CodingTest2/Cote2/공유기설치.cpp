#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, c, num;
vector<int> v;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> c;

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	int left = 1, right = v[n-1] - v[0], mid;
	int r = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		int cnt = 1;
		int prev = v[0];

		for (int i = 1; i < n; i++)
		{
			if (v[i] - prev >= mid)
			{
				cnt++;
				prev = v[i];
			}
		}

		if (cnt >= c)
		{
			r = max(r, mid);;
			left = mid + 1;
		}
		else right = mid - 1;
	}

	cout << r;

}