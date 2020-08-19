#include <iostream>
using namespace std;
int main()
{
	int t,n,count=0,z=0;
	cin >> t;
	while(t--)
	{
		count = 0,z=0;
		cin >> n;
		char a[3001] = { 0 };
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] % 2 != 0)
				count++;
		}
		if (count > 1)
		{
			for (int i = 0; i < n; i++)
			{
				if (a[i] % 2 != 0)
				{
					z++;
					cout << a[i];
				
				}
				if (z == 2)
				{
					cout << endl;
					break;
				}

			}
		}
		else
			cout << -1 << endl;

	}
	return 0;


}