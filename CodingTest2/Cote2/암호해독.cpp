#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

string com;
string str;

int main()
{
	cin >> com >> str;

	vector <vector<char>> arr(com.length(), vector<char>(100, 0));
	for (int i = 0; i < com.size(); i++)
	{
		int cnt = 0;
		while (cnt >= str.size())
		{
			arr[i].push_back(str[cnt]);
			cnt++;
		}
	}
	for (int i = 0; i < com.size(); i++)
	{
		for (int j = 0; j < arr[i].size(); j++)
		{
			cout << arr[i][j]<<" ";
		}
		cout << endl;
	}
}
