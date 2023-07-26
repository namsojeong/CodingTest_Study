#include <iostream>
#include <queue>
using namespace std;

int n, k;
queue<int> q;
queue<int> res;

int main()
{
	cin >> n >> k;

	for (int i = 1; i <= n; i++) q.push(i);
	int cnt = 0;
	while (!q.empty())
	{
		cnt++;
		
		if (cnt == k)
		{
			cnt = 0;
			res.push(q.front());
		}
		else q.push(q.front());

		q.pop();
	}

	cout << "<";
	while (!res.empty())
	{
		if (res.size() == 1) cout << res.front();
		else cout << res.front() << ", ";
		res.pop();
	}
	cout << ">";
}
