#include <iostream>
using namespace std;

string str;
bool isEnd = false;
int main()
{
	cin >> str;

	int i = 0, j=10;
	while (true)
	{
		if (i + 10 >= str.length())
		{
			isEnd = true;
			j = (str.length()) - i;
		}
		cout << str.substr(i, j) << "\n";
		if (isEnd)break;
		i +=10;
	}
}