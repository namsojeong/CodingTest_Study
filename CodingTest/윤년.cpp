#include<iostream>
using namespace std;

int year = 0;

int main()
{
	cin >> year;

	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		cout << 1;
	else
		cout<<0;
}