#include <iostream>
using namespace std;

string name; int age, weight;

int main()
{
	while (true)
	{
		cin >> name >> age >> weight;
		if (name == "#") break;
		cout << name << " ";

		if (age > 17 || weight >= 80) cout << "Senior";
		else	cout << "Junior";
		cout << '\n';
	}

}
