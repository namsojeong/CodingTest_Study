#include<iostream>
#include <sstream>
using namespace std;

string str;
int cnt = 0;

int main()
{
	getline(cin, str);
	stringstream s(str); // stringstream ������ �������� string �ڸ���
	s.str(str);

	string w;
	while (s >> w)
	{
		cnt++;
	}
	
	cout << cnt;
}