#include<iostream>

using namespace std;

string arr;
int alphabet[26] = { 0, }; //���ĺ� ������ �����ϱ� ���� �迭

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> arr;

	//a~z���� ���ʷ� ����0���� 25�� ���� ����
	for (int i = 0; i < arr.size(); i++) {
		alphabet[arr[i] - 97] += 1;
	}

	for (int i = 0; i < 26; i++) {
		cout << alphabet[i] << ' ';
	}

	return 0;
}