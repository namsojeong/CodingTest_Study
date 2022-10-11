#include<iostream>

using namespace std;
string str;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> str;
	for (int i = 0; i < str.size(); i++)
	{
		if (isupper(str[i])) str[i] = tolower(str[i]);
		else if(islower(str[i])) str[i] = toupper(str[i]);
	}

	cout << str;
}