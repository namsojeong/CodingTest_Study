#include<iostream>
#include<map>
using namespace std;

string str;
int maxIndex = -1;
bool isCor = true;
int arr[27] = { 0, };
int main()
{
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		arr[str[i] - 'a']+=1;
	}


	for (int i = 0; i < str.length(); i++)
	{
		if (arr[maxIndex] == arr[str[i]-'a'] && maxIndex != str[i]-'a')
		{
			isCor = false;
		}
		else if (arr[maxIndex] < arr[str[i] - 'a'])
		{
			isCor = true;
			maxIndex = str[i] - 'a';
		}

	}

	if (isCor) cout << (char)(maxIndex + 'A');
	else cout << '?';
}