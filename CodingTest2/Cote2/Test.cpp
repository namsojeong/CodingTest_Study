#include <iostream>
#include <set>
using namespace std;

int num;
set<int> s;
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	for (int i = 0; i < 10; i++)
	{
		cin >> num;
			s.insert(num%42);
	}

	cout << s.size();
}