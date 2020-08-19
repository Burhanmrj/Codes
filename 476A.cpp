#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	if (n < m)
		cout << -1;
	else if (n == m)
	{
		if (m % 2 == 0)
			cout << m / 2;
	}
	else
		cout << n / m + 1;
	return 0;


}
