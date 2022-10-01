#include<iostream>

using namespace std;

int cnt = 0, n=0;
bool isS = false;
int num;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	int i = n;
	while (i--)
	{
		cin >> num;
		if (num == 1) continue;
		for (int j = 2; j <= num; j++)
		{
			isS = false;
			if (num % j == 0 && num!=j) break;
			isS = true;
		}
		if (isS) cnt++;
	}
	cout << cnt;
}