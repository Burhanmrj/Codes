#include <iostream>
using namespace std;
int main()
{
	int n,q;
	cin >> n;
	long long int sum=0,sum2=0,sum3=0;
	for (int i = 0; i < n; i++)
	{
		cin >> q;
		sum += q;
	}
	for (int i = 0; i < n-1; i++)
	{
		cin >> q;
		sum2 += q;
	}
	for (int i = 0; i < n-2; i++)
	{
		cin >> q;
		sum3 += q;
	}
	cout << sum - sum2 << endl << sum2 - sum3;
	return 0;

	
}