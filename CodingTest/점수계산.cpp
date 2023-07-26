#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int cnt = 0, n, sum=0;
vector<pair<int, int>> vec;
vector<int> arr;
bool compare(const pair<int, int>& a, const pair<int, int>& b)
{
	if (a.second == b.second)
	{
		return a.second > b.second;
	}
	return a.second > b.second;
}
int main()
{
	for (int i = 1; i <= 8; i++)
	{
		cin >> n;
		vec.push_back({ i, n });
	}
	sort(vec.begin(), vec.end(), compare);

	for (int i = 0; i < 5; i++)
	{
		sum += vec[i].second;
		arr.push_back(vec[i].first);
	}
	
	cout << sum << '\n';
	sort(arr.begin(), arr.end());
	for (int i = 0; i < 5; i++) cout << arr[i] << ' ';

}
