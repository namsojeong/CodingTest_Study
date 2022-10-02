#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int a, b, c;
vector<int> v;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	while (true)
	{
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) break;
		v.clear();
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);
		sort(v.rbegin(), v.rend());
		bool isRight = (v[0] * v[0]) == ((v[1] * v[1]) + (v[2] * v[2])) ? true : false;
		if (isRight)cout << "right" << '\n';
		else cout << "wrong" << '\n';
	}
	return 0;
}