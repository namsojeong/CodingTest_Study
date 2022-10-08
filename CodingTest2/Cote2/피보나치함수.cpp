#include<iostream>
using namespace std;

int n = 0, one = 0, zero = 0;
int num = 0;

int fibonacci(int n) {
    if (n == 0) {
        zero++;
        return 0;
    }
    else if (n == 1) {
        one++;
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        fibonacci(num);
    }
    cout << "0 " << zero << '\n';
    cout << "1 " << one;
}