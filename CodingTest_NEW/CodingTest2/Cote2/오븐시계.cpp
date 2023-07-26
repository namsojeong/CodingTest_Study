#include <iostream>
using namespace std;


int h, m, p;
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);  cout.tie(NULL);

	cin >> h >> m >> p;
	m += p;
	if (m >= 60)

	{
		h += m / 60;
		m %= 60;
	}
	if (h >= 24)
	{
		h = h - 24;
	}

	cout << h << " " << m;
}