#include <iostream>
using namespace std;

int n;
int fibo(int a)
{
	if (a == 0) return 0;
	if (a == 1) return 1;
	return fibo(a-2) + fibo(a - 1);
}
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);  cout.tie(NULL);
	
	cin >> n;
	cout << fibo(n);

}