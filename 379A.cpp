#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b;
	cin >> a >> b;
	double sum = a;
	while (a > 1)
	{
		a /= b;

		sum += a;
	}
	cout << floor(sum);
	return 0;
}