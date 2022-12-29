#include <iostream>
using namespace std;

int n;
int arr[46] = { };
int fibo(int a)
{
	if (arr[a] == -1)	arr[a] = fibo(a - 2) + fibo(a - 1);
	return arr[a];
}
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);  cout.tie(NULL);
	fill_n(arr, 46, -1);
	arr[0] = 0;
	arr[1] = 1;

	cin >> n;
	cout << fibo(n);

}