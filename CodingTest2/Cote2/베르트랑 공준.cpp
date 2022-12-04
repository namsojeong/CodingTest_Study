#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int n, cnt=0;
bool isCor[10000001] = { true, };
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	while (true)
	{
		cin >> n;
		if (n == 0) break;
		
		if (n == 1)
		{
			cout << 1 << '\n';
			continue;
		}

		int a = n, b = n*2;
		fill_n(isCor, b+1, true);

		cnt = 0;
		isCor[0] = false;
		isCor[1] = false;
		for (int i = 2; i <= sqrt(b); i++) {
			if (isCor[i] == true) {
				for (int j = i * 2; j <= b; j += i) isCor[j] = false;
			}
		}

		for (int i = a+1; i <= b; i++) {
			if (isCor[i]) cnt++;
		}

		cout << cnt << '\n';
	}
}