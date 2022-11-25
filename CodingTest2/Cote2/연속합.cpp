#include <iostream>
#include <vector>
using namespace std;

int n, num, maxNum = -1000, maxIdx = -1, cnt = 1;
vector<int> vec;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (maxNum < num)
		{
			maxIdx = i;
			maxNum = num;
		}
		vec.push_back(num);
	}

	int temp = 0, total = 0;
	for (int i = 1; i < vec.size() - maxIdx; i++)
	{
		if (vec[maxIdx + i] > 0)
		{
			cout << vec[maxIdx + i] << " ";
			cnt++;
			maxNum += vec[maxIdx + i];
		}
		else
		{
			temp = vec[maxIdx + i];
			int j = 1;

			if (maxIdx + i + j < vec.size() - 1)
			{
				while (vec[maxIdx + i + j] > 0)
				{
					temp += vec[maxIdx + i + j];
					j++;
					cout << vec[maxIdx + i + j] << " ";
					if (maxIdx + i + j >= vec.size() - 1)
					{
						break;
					}
				}
			}
			
			if (temp > 0)
			{
				cnt += j;
				maxNum += temp;
			}
		}
	}

	cout << cnt;

}