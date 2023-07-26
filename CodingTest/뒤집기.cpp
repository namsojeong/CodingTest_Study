#include <iostream>

using namespace std;

string s;
bool isBefore = false;

int Func(char ch, int cnt)
{
	for (int i = 0; i < s.length(); i++)
	{
		if (!isBefore && s[i] == ch)
		{
			cnt++;
			isBefore = true;
		}
		if(s[i]!=ch)
		{
			isBefore = false;
		}
	}
	return cnt;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> s;

	if (Func('1', 0) < Func('0', 0)) cout << Func('1', 0);
	else cout << Func('0', 0);

}