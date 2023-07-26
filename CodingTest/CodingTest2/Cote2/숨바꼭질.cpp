#include<iostream>
#include<queue>
#include<vector>
using namespace std;
const int MAX = 100001;
int n, k, cnt = 0, x;
bool visited[MAX];

int main() {
    cin >> n >> k;
   
    queue<pair<int, int>> q;
    visited[n] = true;
    q.push({ 0, n });

    while (!q.empty()) {
        cnt = q.front().first;
        x = q.front().second;
        q.pop();

        if (x == k)
        {
            cout << cnt;
            break;
        }
        if (x + 1 >= 0 && x + 1 < 100001)
        {
            if (!visited[x + 1])
            {
                visited[x + 1] = true;
                q.push({ cnt + 1, x + 1 });
            }
        }
        if (x - 1 >= 0 && x - 1 < 100001)
        {
            if (!visited[x - 1])
            {
                visited[x - 1] = true;
                q.push({ cnt + 1, x - 1 });
            }
        }
        if (x * 2 >= 0 && x * 2 < 100001)
        {
            if (!visited[x * 2])
            {
                visited[x * 2] = true;
                q.push({ cnt + 1, x * 2 });
            }
        }
    }
    return 0;
}