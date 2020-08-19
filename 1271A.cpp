#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	long int a, b, c, d, e, f;
	long int suit1 = 0, suit2 = 0;
	cin >> a >> b >> c >> d >> e >> f;
	if (e > f)
	{
		int x = min(a, d);
		suit1 = x * e;
		long int z = d - x;
		if (z > 0)
		{
			suit2 = min(b, min(c, z)) * f;
		}
	}
	else if (e < f)
	{
		int x = min(b, min(c, d));
		suit2 = x * f;
		long int z = d - x;
		if(z>0)
		{
			x = min(a, z);
			suit1 =x*e ;
		}
	}
	else
	{
		int x = min(a, d);
		suit1 = x * e;
		long int z = d - x;
		if (z > 0)
		{
			suit2 = min(b, min(c, z)) * f;
		}
	}
	cout << suit1 + suit2;
	return 0;
}