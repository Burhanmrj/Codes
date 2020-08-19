#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a[2];
		cin >> a[0] >> a[1];
		int hrs, min;
		hrs = 23 - a[0];
		min = 60 - a[1];
		if (hrs != 0)
			hrs *= 60;
		cout << hrs + min << endl;
	}

}