#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int n, num, result=0;
vector<int> v;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		v.push_back(num);
	}

	if (n == 1)	result = v[0];
	else
	{
		sort(v.rbegin(), v.rend());
		while (v.size() != 1)
		{
			int a = v.back();
			v.pop_back();
			int b = v.back();
			v.pop_back();

			result += a + b;
			v.push_back(a+b);
		}
	}
	cout << result;
	
	return 0;
}