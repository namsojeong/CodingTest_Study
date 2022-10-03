#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int n, a;
vector<int> v;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		v.clear();
		for (int i = 0; i < 10; i++)
		{
			cin >> a;
			v.push_back(a);
		}
		sort(v.begin(), v.end());
		v.pop_back();
		v.pop_back();
		cout << v.back() << '\n';
	}

	return 0;
}