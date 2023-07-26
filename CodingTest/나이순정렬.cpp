#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<pair<int, int>> v;
vector<string> str;
string s;
int n;
int num;

bool compare(pair<int, int>a, pair<int, int>b) {
	if (a.first == b.first) {
		return a.second < b.second;
	}
	else {
		return a.first < b.first;
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num >> s;
		v.push_back(make_pair(num, i));
		str.push_back(s);
	}
	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < n; i++)
	{
		cout << v[i].first << " " << str[v[i].second] << '\n';
	}

}