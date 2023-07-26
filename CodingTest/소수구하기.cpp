#include<iostream>
#include<math.h>

using namespace std;

int a, b;
bool isCor[1000001];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> a >> b;
	fill_n(isCor, b + 1, true);

	isCor[0] = false;
	isCor[1] = false;

	for (int i = 2; i <= sqrt(b); i++) {
		if (isCor[i] == true) {
			for (int j = i * 2; j <= b; j += i) isCor[j] = false;
		}
	}

	for (int i = a; i <= b; i++) {
		if (isCor[i]) cout  << i<<'\n';
	}
}