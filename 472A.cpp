#include<iostream>
#include<cmath>
using namespace std;
int prime(int a)
{
	for (int i = 2; i <= a / 2; i++)
		if (a % i == 0)
			return 0;
	return 1;
}
int main()
{
	double a;
	cin >> a;
	double z, y;
	z = y = a / 2;
	z = ceil(z);
	y = floor(y);
	while (z > 0 && y > 0)
	{
		if (prime(z) || prime(y))
		{
			z -= 1;
			y += 1;
		}
		else
			break;
	}
	cout << z <<" "<< y;
	return 0;
}