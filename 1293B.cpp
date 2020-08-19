#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long double sum = 0;
	while (n > 0)
	{
		sum += 1.0 / n ;
		n--;
	}
	cout.precision(12);
	cout<< sum;
	return 0;
}