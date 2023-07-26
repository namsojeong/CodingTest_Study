#include<iostream>
#include<vector>
using namespace std;

long long t, n;
long long arr[101] = { 0, 1, 1, 1, 2, 2, 3, 4, 5, 7, 9, 12, 0, 0, };
long long P(int index)
{
	if (arr[index] == 0 && index != 0) arr[index] = P(index - 1) + P(index - 5);
	return arr[index];
}
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> t;
	while (t--)
	{
		cin >> n;
		cout << P(n) << '\n';
	}
}