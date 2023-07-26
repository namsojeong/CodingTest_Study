#include<iostream>
#include<stack>

using namespace std;

int n;
stack<int> s;
int arr[100001];
int idx = 1;
int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 1; i <= n; i++)
	{
		if (idx < i)
		{
			s.push(i);
			cout << "+" << endl;
		}
		else if (idx == i)
		{
			cout << "+" << endl;
			cout << "-" << endl;
		}
	}
}