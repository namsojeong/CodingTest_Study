#include<iostream>
#include<vector>
#include<math.h>
#include<set>
#include<algorithm>

using namespace std;

int n, num;
double total = 0;
int maxNum = 0;
vector<int> vec;
set<int> many;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		vec.push_back(num);
	}

	total = 0;
	for (int i = 0; i < n; i++)
	{
		total += vec[i];
	}
	total = round(total / n);
	cout << total << '\n';

	sort(vec.begin(), vec.end());	
	cout << vec[n / 2] << '\n';

	for (int i = 0; i < n; i++)
	{
		int cnt = count(vec.begin(), vec.end(), vec[i]);
		if (cnt >= vec[maxNum])
		{
			maxNum = i;
			many.insert(i);
		}
	}
	cout << vec[maxNum] << '\n';
	cout << vec[n - 1] - vec[0] << '\n';
}