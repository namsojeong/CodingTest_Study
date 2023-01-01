#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> v;
int n, m;
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);  cout.tie(NULL);

	for (int i = 0; i < 3; i++)
	{
		cin >> n, m;
		v.push_back({ n, m });
	}



}