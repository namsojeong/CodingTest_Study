#include<iostream>
#include<stack>

using namespace std;
int cnt = 0;
stack<string> qs;
stack<string> qr;
string str;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> cnt;

	for (int i = 0; i < cnt; i++)
	{
		cin >> str;
		if (qs.empty()) qs.push(str);
		else
		{
			while (!qs.empty())
			{
				string last = qs.top();
				if (last.size() > str.size())
				{
					qr.push(last);
					qr.pop();
				}
			}
			qs.push(str);
		}
	}

}