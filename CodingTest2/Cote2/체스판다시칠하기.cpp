#include<iostream>
#include<vector>

using namespace std;

int m, n, cntB=0, cntW=0;

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
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;

	string temp;
	int tempI = 0;
	int tempJ = 0;
	for (int i = 0; i < n; i++)
	{
		if (i == 8) tempI = 8;
		tempJ = 0;
		cin>>temp;
		for (int j = 0; j < m; j++)
		{
			if (j == 8) tempJ = 8;
			if (WB[i - tempI][j - tempJ] != temp[j])	cntW++;
			if (BW[i - tempI][j - tempJ] != temp[j])	cntB++;
		}
	}
	cout << cntW<<endl;
	cout << cntB;
	//cout << min(cntW, cntB);
}