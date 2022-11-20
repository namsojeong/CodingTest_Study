#include <iostream>
using namespace std;

int a, b, total = 0, cnt = 0;
int main() {
	cin >> a >> b;

	int i = 0;
	while (cnt <= b)
	{
		i++;
		for (int j = 0; j < i; j++)
		{
			cnt++;
			if (cnt >= a) total += i;
			if (cnt >= b) break;
		}
		if (cnt >= b) break;
	}
	cout << total;
}