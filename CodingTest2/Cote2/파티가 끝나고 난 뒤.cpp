#include<iostream>
#include<vector>

using namespace std;

int n,m, num;
vector<int> vec;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	for (int i = 0; i < 5; i++)
	{
		cin >> num;
		vec.push_back(num);
	}

	int res = n * m;
	for (int i = 0; i < 5; i++)	cout << vec[i] - res << " ";

	
}