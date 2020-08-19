#include <iostream>
using namespace std;
int main()
{
	int n,x;
	cin >> n;
	int a[5] = { 0 };
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		a[x]++;
	}
	int count = a[4];
	if (a[3] >= a[1])
	{
		count += a[3];
		a[1] = a[3] - a[1];
	}
	/*else
	{
		a[1] = a[1] - a[3];
		count += a[3];
	}*/
	while (a[2]>1)
	{
		int p = a[2] / 2;
		count += a[2]/2;
		a[2]-=2*p;
	}
	while (a[1]>0 || a[2]>0)
	{
		if (a[1] > 4)
		{
			count+= a[1] /= 4;
			a[1] %= 4;
		}
		if (a[0])
			count++;
		a[1]--;
		a[2]--;
	}
	cout << count;
	return 0;
	


}