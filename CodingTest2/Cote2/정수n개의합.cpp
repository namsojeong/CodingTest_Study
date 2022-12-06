#include<iostream>
#include<vector>
using namespace std;

long long sum(std::vector<int>& a)
{
	int s = 0;
	while (!a.empty())
	{
		s += a.back();
		a.pop_back();
	}
	return s;
}