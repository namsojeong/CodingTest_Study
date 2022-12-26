#include <iostream>
#include <map>
using namespace std;

string str;
int arr[27] = { -1,-1, -1, -1,  };
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);  cout.tie(NULL);
	fill_n(arr, 26, -1);

	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		if (arr[str[i] - 97] == -1)
		{
			arr[str[i] - 97] = i;
			cout << str[i]-97 << endl;
		}
	}


	for (int i = 0; i < 26; i++)
	{
		cout << arr[i]<<" ";
	}

	return 0;
}