#include <iostream>
using namespace std;

long long n, cnt = 0;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	
	if (n == 0) cnt = 0;
	for (long long i = 2; i <= n; i++)
	{
		if (i % 5 == 0)cnt++;
		if (i % 25 == 0)cnt++;
		if (i % 125 == 0)cnt++;
	}

	cout << cnt;
}