#include <iostream>
#include <string>
using namespace std;

string str, n;
int cnt = 0;
int main()
{
	cin >> n;

	while (int(n.size()) != 1) {
		int sum = 0;
		for (unsigned i = 0; i < n.size(); i++) {
			sum += int(n[i]) - 48;
		}
		n = to_string(sum);
		cnt++;
	}

	str = (n == "3" || n == "6" || n == "9") ? "YES" : "NO";
	cout << cnt << '\n' << str;
}
