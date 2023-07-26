#include <iostream>
#include <vector>
using namespace std;

int n, ans = 0;
int arr[1001];
vector<int> dp(1001, 1);
int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++)  cin >> arr[i];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < i; j++) if (arr[i] > arr[j]) dp[i] = max(dp[j] + 1, dp[i]);

    for (int i = 0; i < n; i++) ans = max(ans, dp[i]);

    cout << ans << endl;
    return 0;
}