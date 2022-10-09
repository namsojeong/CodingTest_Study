#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<string> v, result;
int n, m, cnt = 0;
string str;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n + m; i++)
	{
		cin >> str;
		v.push_back(str);
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < n + m - 1; i++)
	{
		if (v[i] == v[i+1])
		{
			cnt++;
			result.push_back(v[i]);
		}
	}

	cout << cnt << '\n';
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << '\n';
	}

}