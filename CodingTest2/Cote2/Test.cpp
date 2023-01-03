#include <iostream>
using namespace std;

int fac(int a)
{
	if (a == 1) return 1;
	if (a == 0) return 1;
	return fac(a - 1) * fac(a - 2);
}
int n;
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);  cout.tie(NULL);

	cin >> n;

}