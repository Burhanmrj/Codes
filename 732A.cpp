#include <iostream>
using namespace std;
int main()
{
	int a,i,c;
	double q,b;
	cin >> a >> b;
	
	for (i = 1; i < 10; i++)
	{
		c = a * i;
		q = (c % 10);
		if (q == 0 || q==b)
			break;
		c = a;
	}
	cout << i;
	return 0;
}