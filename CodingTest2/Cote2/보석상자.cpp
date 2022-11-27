#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int n, m, num, ans;
vector<int> vec;

int solution()
{
	int low=1, high = vec.back(), mid;
	while (low <= high)
	{
		mid = (low + high)/2;
		int cnt = 0;


		for (int i = 0; i < m; i++) {
			cnt += vec[i] / mid;
			if (vec[i] % mid != 0) cnt++;
		}

		if (cnt <= n) {
			high = mid - 1;
			ans = mid;
		}
		else {
			low = mid + 1;
		}
	}

	return ans;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> num;
		vec.push_back(num);
	}

	sort(vec.begin(), vec.end());
	cout << solution();
}