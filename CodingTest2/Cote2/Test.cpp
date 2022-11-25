#include <iostream>
using namespace std;

int minNum = 2000, num, jb, ja;
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	for (int i = 0; i < 3; i++)
	{
		cin >> num;
		if (num < minNum) minNum = num;
	}

	cin >> ja >> jb;
	minNum += ja < jb ? ja : jb;

	cout << minNum - 50;
}