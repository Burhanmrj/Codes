#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a,b,c,n;
		cin >> a >> b >> c >> n;
		int x = (a + b + c + n) / 3;
		if ((a + b + c + n) % 3 == 0 && x >= a && x >= b && x >= c)
			cout << "YES";
		else
			cout << "NO";
		cout << endl;
	}
	return 0;
}