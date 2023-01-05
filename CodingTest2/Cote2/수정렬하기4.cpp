#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000001] = { 0, };
int n;
bool comp(int a, int b)
{
	return a > b;
}
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);  cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
	
	sort(arr, arr + n, comp);
	for (int i = 0; i < n; i++) cout << arr[i]<<"\n";

}