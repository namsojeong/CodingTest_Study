#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int h, w, s;
int ih, iw, is;
int n;

int main()
{
	cin >>ih >> iw >> is;
	cin >> n;

	h = ih;
	w = iw;
	s = is + n;

	while (true)
	{
		if (s >= 60)
		{
			w += s/60;
			s -= ( s / 60) *60;
		}
		if (w >= 60)
		{
			h += w / 60;
			w -= (w / 60) * 60;
		}
		if (h >= 24)
		{
			h -= (h / 24) * 24;
		}

		if (w < 60 && s < 60)break;
	}

	cout << h << " " << w << " " << s << endl;

}
