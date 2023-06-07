#include<iostream>
using namespace std;

class TestClass
{
private:
	readonly int a = 10;
};
int main()
{
	__readonly int a = 10;
	a = 20;
}