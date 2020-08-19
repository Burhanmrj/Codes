#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		double a;
		cin >> a;
		double n = 360 / (180 - a);
		if (n < 3)
			cout << "NO" << endl;
		else if (n == int(n))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;


}