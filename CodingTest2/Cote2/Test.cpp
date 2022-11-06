#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> vec;
int a;
int main() {
    for (int i = 0; i < 3; i++)
    {
        cin >> a;
        vec.push_back(a);
    }
    sort(vec.begin(), vec.end());
    cout << vec[0] << " " << vec[1] << " " << vec[2];

}