#include <iostream>
#include <vector>
using namespace std;


int total, n, m, cnt, num;
vector<int> vec;
double result;
int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		total = 0, cnt = 0;
		vec.clear();
		cin >> m;

		for (int j = 0; j < m; j++) {
			cin >> num;
			total += num;
			vec.push_back(num);
		}
		total /= m;

		for (int j = 0; j < m; j++) {
			if (vec[j] > total) cnt++;
		}
		result = (double)cnt / m * 100;

		cout << fixed;
		cout.precision(3);
		cout << result << "%\n";
	}
}