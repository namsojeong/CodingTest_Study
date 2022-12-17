#include <iostream>
#include <set>
using namespace std;

	int temp;
set<int> s;
int main()
{
	for(int i=0;i<3;i++)
	{
	cin >> temp;
	s.insert(temp);
	}
	
	s.erase(s.begin());
	set<int>::iterator iter = s.begin();
	cout << *iter;

}