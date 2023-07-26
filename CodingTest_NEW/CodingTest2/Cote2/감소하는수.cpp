#include <iostream>
#include <vector>
using namespace std;

int n;
int cnt = 0;
int temp = 0;
bool isCor = false;
vector<int> vec;

int main()
{
	cin >> n;

	while (cnt <= n)
	{
		isCor = false;
		temp++;
		int a = temp;

		while (a>0)
		{
			int b = a % 10;
			a /= 10;
			vec.push_back(b);
		}

		int next=INFINITY;
		for (int i = 0; i < vec.size(); i++)
		{
			if (next > vec[i])
			{
				isCor = true;
				next = vec[i];
			}
		}
		if (isCor)cnt++;
	}
	cout << temp;

}
