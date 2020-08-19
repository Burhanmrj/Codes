#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n,z,count=0,sum=0;
		cin >> n;
		int a[200] = { 0 };
		for (int i = 0; i < n; i++)
		{
			cin >> z;
			if (z == 0)
			{
				z = 1;
				count++;
			}
			a[i] = z;
			sum += a[i];
		}
		if (sum == 0)
			count++;
		cout << count << endl;
	}
	return 0;

}