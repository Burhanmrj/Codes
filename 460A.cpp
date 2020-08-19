#include <iostream>
using namespace std;
int main()
{
	int i = 0, n, m,q=1;
	cin >> n >> m;
	while (n)
	{
		n--;
		i++;
		if (i == q * m)
		{
			n++;
			q++;
		}
	}
	cout << i;
	return 0;
}

