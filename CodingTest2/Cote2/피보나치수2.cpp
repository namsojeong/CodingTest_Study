#include <iostream>
using namespace std;

long long n;
long long arr[91] = { 0, 1, };
long long fibo(int a)
{
	if (a < 2) return arr[a];
	else if (arr[a] == 0) arr[a] = fibo(a - 1) + fibo(a - 2);
	
	return arr[a];
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	cout << fibo(n);
}