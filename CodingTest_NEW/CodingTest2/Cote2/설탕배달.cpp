#include<iostream>

using namespace std;
int n;
int cnt = 0;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	int temp = n;
	int tempNum = temp;
	cnt = temp / 5;
	while (true)
	{
		temp = tempNum;
		if (cnt < 0)
		{
			cout << "-1";
			return 0;
		}
		tempNum = temp;
		temp = temp - 5 * cnt;
		if (temp % 3 == 0)
		{
			cnt += temp / 3;
			break;
		}
		cnt--;
	}
	cout << cnt;

}