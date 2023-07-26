#include<iostream>

using namespace std;

string arr;
int alphabet[26] = { 0, }; //알파벳 개수를 저장하기 위한 배열

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> arr;

	//a~z까지 차례로 숫자0부터 25의 값을 지정
	for (int i = 0; i < arr.size(); i++) {
		alphabet[arr[i] - 97] += 1;
	}

	for (int i = 0; i < 26; i++) {
		cout << alphabet[i] << ' ';
	}

	return 0;
}