#include <iostream>
using namespace std;
int main()
{
	int n,x=1;
	cin >> n;
	while (x * 5 < n)							//2^n*5
	{
		n -= x * 5;
		x *= 2;
	}
	string a[] = { "Sheldon", "Leonard", "Penny", "Rajesh", "Howard" };
	cout << a[(n - 1) / x] << endl;
	return 0;

}