#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
     int temp;
    int minNum = 12345;
    int n, m;
string WB[8] = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
};
string BW[8] = {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
};
string str[50];
int WB_cnt(int x, int y)
{
    int cnt = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (str[x + i][y + j] != WB[i][j])
                cnt++;
        }

    }
    return cnt;
}
int BW_cnt(int x, int y)
{
    int cnt = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (str[x + i][y + j] != BW[i][j])
                cnt++;
        }

    }
    return cnt;
}
int main() {
    cin >> n >>m;
    for (int i = 0; i < n; i++)
        cin >> str[i];
    for (int i = 0; i + 8 <= n; i++)
    {
        for (int j = 0; j + 8 <= m; j++)
        {
            temp = min(WB_cnt(i, j), BW_cnt(i, j));
            minNum = (temp < minNum) ? temp : minNum;
        }
    }
    cout << minNum;
    return 0;
}