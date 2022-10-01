#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int n;
vector<pair<int, int>> inputV ;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		inputV.push_back(make_pair(a, b));
	}
	sort(inputV.begin(), inputV.end());

	for (int i = 0; i < n; i++)
		cout << inputV[i].first << " " << inputV[i].second << '\n';
}