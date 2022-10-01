#include<iostream>

using namespace std;
int w, h, t, n;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> h >> w >> n;
		if (n%h==0) cout << h * 100 + (n/h) << '\n';
		else cout << ((n % h) * 100) + ((n / h) + 1) << '\n';
	}

}