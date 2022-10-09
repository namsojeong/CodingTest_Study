#include <iostream>
#include <vector>
using namespace std;

int n;
int main() {
	cin >> n;
	vector<int> arr(n + 1);
	arr[1] = 0;
	for (int i = 2; i <= n; i++) {
		arr[i] = arr[i - 1] + 1;
		if (!(i % 3)) arr[i] = min(arr[i], arr[i / 3] + 1);
		if (!(i % 2)) arr[i] = min(arr[i], arr[i / 2] + 1);
	}

	cout << arr[n] << endl;
	return 0;
}