#include<iostream>
#include<queue>

using namespace std;
queue<int> q;

string str;
int a;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> str;
		if (str == "push")
		{
			int num = 0;
			cin >> num;
			q.push(num);
		}
		else
		{
			if (str == "front")
			{
				if (q.empty()) cout << -1;
				else cout << q.front();
			}
			else if (str == "back")
			{
				if (q.empty()) cout << -1;
				else cout << q.back();
			}
			else if (str == "size")
			{
				cout << q.size();
			}
			else if (str == "empty")
			{
				if (q.empty())
					cout << 1;
				else
					cout << 0;
			}
			else if (str == "pop")
			{
				if (q.empty())
				{
					cout << -1;
				}
				else
				{
					cout << q.front();
					q.pop();
				}
			}

			if (i != n - 1) cout << '\n';
		}

	}
}