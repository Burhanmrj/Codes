#include <iostream>
using namespace std;
int main()
{
	int n, t;
	cin >> n >> t;
	if (n <2 && t == 10)
		cout << -1;

	else if (n == 1 && t < 10)
		cout << t;
	else
	{	for (int i = 0; i < n; i++)
			cout << t;
	}
	return 0;
}