#include <iostream>
using namespace std;
int main()
{
	double n, m;
	cin >> n >> m;
	double i = 0;
	double time = m;
	if (time < 4*60)
	{
		for (i = 1; i < n + 1; i++)
		{
			time += 5 * i;
			if (time > 4*60)
				break;
		}
		cout << i-1;
	}
	else 
		cout << i;
	return 0;
}