#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int cnt;
vector<int> v;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> cnt;
	

	for (int i = 0; i < cnt; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}

	sort(v.rbegin(), v.rend());

	while (!v.empty())
	{
		cout << v.back() << '\n';
		v.pop_back();
	}
}