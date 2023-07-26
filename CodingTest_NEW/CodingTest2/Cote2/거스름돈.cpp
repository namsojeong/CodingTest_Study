#include <iostream>
using namespace std;

int n, cnt = 0;
int arr[6] = { 500, 100, 50,10,5, 1 };
int main()
{
	ios::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
	
	cin >> n;
	n = 1000 - n;
	for (int i = 0; i < 6; i++)
	{
		cnt += n / arr[i];
		n %= arr[i];
	}
	cout << cnt;
}