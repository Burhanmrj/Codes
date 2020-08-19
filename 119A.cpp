#include <iostream>
using namespace std;
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}
int main()
{
	int a, b, n,a1=0,b1=0;
	cin >> a >> b >> n;
	while (n > 0)
	{
		n -= gcd(a, n);
		if (n <= 0)
		{
			a1 = 1;
			break;
		}
		n -= gcd(b, n);
		if (n <= 0)
		{
			b1 = 1;
			break;
		}
	}
	if (a1)
		cout << 0;
	if (b1)
		cout << 1;
	return 0;
}