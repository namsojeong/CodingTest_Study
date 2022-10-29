#include <iostream>
using namespace std;

int a, b, c, cnt = 0;
int arr[7] = { 0, };
int n = 0;

int main() {
    cin >> a>>b>>c;

    arr[a]++;
    arr[b]++;
    arr[c]++;

    for (int i = 1; i <= 6; i++)
    {
        if (arr[i] >= 2)
        {
            n = i;
            cnt++;
            if (arr[i] == 3)cnt++;
        }
    }

    if (cnt == 0)
    {
        int maxNum = max(a, b);
        maxNum = max(maxNum, c);
        cout <<  maxNum * 100;
    }
    else if (cnt == 1) cout << 1000 + n * 100;
    else if (cnt == 2) cout << 10000 + n * 1000;
}