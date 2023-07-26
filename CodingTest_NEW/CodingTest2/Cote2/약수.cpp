#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, cnt=1;
int a, b;
vector<int> vec_int;

int main() {

	cin >> n;
	
	b = n%10;
	n /= 10;
	vec_int.push_back(b);
	a = n%10;
	vec_int.push_back(a);
	
	while (true)
	{
		int cur = vec_int.back();
		vec_int.pop_back();
		int last = vec_int.back();
		vec_int.pop_back();

		if (cur + last >= 10) vec_int.push_back((cur + last) % 10);
		else vec_int.push_back(cur + last);
		vec_int.push_back(last);
		
		if (a == vec_int[1] && b == vec_int[0]) break;
		cnt++;
	}

	cout << cnt;


}