#include <iostream>
using namespace std;

int main()
{
    int num, n, a[41] = { 1 }, b[41] = { 0, 1 };

    for (int i = 2; i <= 40; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
        b[i] = b[i - 1] + b[i - 2];
    }

    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> n;
        cout << a[n] << ' ' << b[n] << endl;
    }
    return 0;
}