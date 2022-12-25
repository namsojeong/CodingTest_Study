#include <iostream>
using namespace std;

int a, b, c;
int main()
{
	cin >> a >> b >> c;

	int temp = (a * b) - c > 0 ? (a * b) - c : 0;
	cout << temp;
}