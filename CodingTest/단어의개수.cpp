#include<iostream>
#include <sstream>
using namespace std;

string str;
int cnt = 0;

int main()
{
	getline(cin, str);
	stringstream s(str); // stringstream 공백을 기준으로 string 자르기
	s.str(str);

	string w;
	while (s >> w)
	{
		cnt++;
	}
	
	cout << cnt;
}