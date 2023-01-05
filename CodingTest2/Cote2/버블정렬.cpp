#include <iostream>
using namespace std;

int arr[100001] = { 0, };
int n, k;
int a = 0;
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);  cout.tie(NULL);

	cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> arr[i];
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < n - 1; j++) if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
	}
	

	for (int i = 0; i < n; i++) cout << arr[i] << " ";
	
}