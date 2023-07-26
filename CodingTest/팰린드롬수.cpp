#include<iostream>

using namespace std;

string n;
bool success = true;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	while (true)
	{
		cin >> n;
		if (n == "0")break;
		for (int i = 0; i < n.size(); i++)
		{
			if (n[i] != n[(n.size()-1) - i])
			{
				success = false;
				break;
			}
			success = true;
		}
		if (success) cout << "yes" << '\n';
		else cout << "no" << '\n';
	}

	return 0;
}