#include <iostream>
using namespace std;
int main()
{
	int t, x, n, m;
	cin >> t;
	while (t--)
	{
		cin >> x >> n >> m;
		
			for (int i = 0; i < n; i++)
			{
				if (x <= 20)
					break;
				x = (x / 2) + 10;
				if (x <= 0)
				{
					cout << "YES" << endl;
					break;
				}
			}
		
		
	
			m *= 10;
			x -= m;
			if(x<=0)
				cout << "YES" << endl;

		
		if (x > 0)
			cout << "NO" << endl;
	}


	return 0;
}