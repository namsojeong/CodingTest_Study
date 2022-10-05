#include<iostream>

using namespace std;
int n, k;

int Fact(int num, int all, int cnt)
{
	if (cnt == 0) return all;
	return Fact(num-1, all*num, cnt-1);
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> k;
	cout << Fact(n, 1, k) / Fact(k, 1, k);

	return 0;
}