#include<iostream>
#include<vector>
#include<math.h>
#include<map>
#include<algorithm>

using namespace std;

int n, num;
int a, b, c, d;
vector<int> vec;
map<int, int> m;

static bool comp(pair<int, int>& a, pair<int, int>& b) {
	if (a.second == b.second) return a.first < b.first;
	return a.second > b.second;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	int idx;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		a += num;
		m[num]++;
		vec.push_back(num);
	}

	if (n == 1)
	{
		a = b = c = vec[0];
		d = 0;
		cout << a << "\n" << b << "\n" << c << "\n" << d;
		return 0;
	}

	sort(vec.begin(), vec.end());
	a = round((float)a / n);
	b = vec[n / 2];
	d = (vec[n - 1]) - (vec[0]);

	vector<pair<int, int>> v(m.begin(), m.end());
	sort(v.begin(), v.end(), comp);

	if (v[0].second == v[1].second) c = v[1].first;
	else c = v[0].first;

	cout << a << "\n" << b << "\n" << c << "\n" << d;
}