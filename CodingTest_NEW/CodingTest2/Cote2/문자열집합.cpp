#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<string> arr;

map<string, int> m;

int a, b, num, cnt = 0;
string str;
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> a >> b;

	for (int i = 0; i < a; i++)
	{
		cin >> str;
		m.insert({ str, 0 });
	}
	for (int i = 0; i < b; i++)
	{
		cin >> str;
		if (m.find(str) != m.end())
		{
			cnt++;
		}
	}

	cout << cnt;
}