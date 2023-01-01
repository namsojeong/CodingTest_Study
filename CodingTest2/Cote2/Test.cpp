#include <iostream>
using namespace std;

long long n, m;
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);  cout.tie(NULL);

	cin >> n >> m;
	long long temp = n - m;
	temp = temp < 0 ? temp * -1 : temp;
	cout << temp;
}