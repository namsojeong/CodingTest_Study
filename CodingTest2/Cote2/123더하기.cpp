#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> vec;
int num, cnt=0;
int  testCase;
vector<int> v;

void Result(int n, int r)
{
    if (r == n) cnt++;
    if (r >= n)return;

    Result(n, r + 1);
    Result(n, r + 2);
    Result(n, r + 3);
}

// 1, 2, 3으로 숫자 만들기 경우의 수 구하기
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> testCase;

    for (int i = 0; i < testCase; i++)
    {
        cnt = 0;
        cin >> num;
        Result(num, 0);
        v.push_back(cnt);
    }
    for (int i = 0; i < testCase; i++)    cout << v[i] << '\n';

}