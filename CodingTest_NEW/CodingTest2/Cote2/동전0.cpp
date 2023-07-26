#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n, k, temp, cnt = 0, s=0;
vector<int> vec;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		if (temp > k) continue;
		vec.push_back(temp);
	}

	sort(vec.begin(), vec.end());

	temp = k;
	s = vec.size();
	for (int i = 0; i < s; i++)
	{
		cnt += temp/ vec.back();
		temp %= vec.back();
		vec.pop_back();
		if (temp <= 0)break;
	}

	cout << cnt;
}