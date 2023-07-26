#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

char arr[201][201];
string com="";
string str;
int n;

int main()
{
	cin >> n >> str;

	int cnt = 0;

	while (cnt < str.size())
	{
		arr[cnt][] = str.substr(cnt, cnt + n);
			cnt += 3;
	}

	for (int i = 0; i < str.size(); i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][]
		}
	}

	for (int i = 0; i < n; i++)
	{
		cnt = i;
		while (cnt < str.size())
		{
			com += str[cnt];
			cnt += n*2-1;
		}
	}
	

	cout << com;
}
