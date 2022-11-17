#include <iostream>
#include <vector>
using namespace std;

int n;
string temp;
vector<string> vec_str;
int main() {
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		vec_str.push_back(temp);
	}

	temp = "";
	for (int i = 0; i < vec_str[0].length(); i++)
	{
		bool isCor = true;
		for (int j = 0; j < vec_str.size(); j++) if (vec_str[j][i] != vec_str[0][i]) isCor = false;
		if (isCor) temp += vec_str[0][i];
		else temp += '?';
	}

	cout << temp;
}