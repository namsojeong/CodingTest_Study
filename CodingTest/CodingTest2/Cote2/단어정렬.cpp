#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<string> str;
string s;
int n;

bool compare(string a, string b) {
	if (a.size() == b.size()) {
		return a.compare(b) < 0;
	}
	else {
		return a.size() < b.size();
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		str.push_back(s);
	}
	sort(str.begin(), str.end(), compare);


	for (int i = 0; i < n; i++)
	{
		if (i >= 1) if (str[i - 1]== str[i]) continue;
		cout << str[i] << '\n';
	}

}