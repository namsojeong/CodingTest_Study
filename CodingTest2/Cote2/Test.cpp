#include <iostream>

using namespace std;

int h, m, ch, cm, tempM = 45;
int main() {

	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> h >> m;

	ch = h;
	cm = 60;
	if (m < 45)
	{
		tempM -= m;
		cm -= tempM;
		ch -= 1;
		if (ch < 0) ch = 23;
	}
	else {
		cm = m - 45;
	}

	cout << ch << " " << cm;
}