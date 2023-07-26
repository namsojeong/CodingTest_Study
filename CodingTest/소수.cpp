#include <iostream>
using namespace std;

int n, a, b, r;

int main() {
	cin >> a >> b >> n;

	for (int i = 0; i < n; i++)
	{
		a %= b;
		a *= 10;
		r = a / b;
	}

	cout << r;

	return 0;
}