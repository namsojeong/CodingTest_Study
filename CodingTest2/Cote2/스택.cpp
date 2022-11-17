#include<iostream>
#include<queue>

using namespace std;
int a;
queue<int> q;
bool isS = false;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		isS = false;
		string s;
		cin >> s;
		for (int j = 0; j < s.size(); j++)
		{
			if (s[j] == '(')
			{
				q.push(1);
				isS = true;
			}
			else
			{
				isS = !q.empty();
				if (!isS) break;
				q.pop();
			}
		}

		while (!q.empty())
		{
			isS = false;
			q.pop();
		}

		if (isS) cout << "YES" << '\n';
		else cout << "NO" << '\n';
		
	}



}