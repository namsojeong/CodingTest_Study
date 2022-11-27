#include <iostream>
#include <string>
#include <vector>

using namespace std;

int a, b;
vector <int> va;
vector <int> vb;
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> a>>b;

	while (a > 0)
	{
		va.push_back(a % 10);
		a /= 10;
	}
	while (b > 0)
	{
		vb.push_back(b % 10);
		b /= 10;
	}
	a = b = 0;
	int temp = 1;
	while (!va.empty())
	{
		a += va.back()*temp;
		temp *= 10;
		va.pop_back();
	}
	temp = 1;
	while (!vb.empty())
	{
		b += vb.back() * temp;
		temp *= 10;
		vb.pop_back();
	}
	int maxNum = a>b?a:b;

	cout << maxNum;
}