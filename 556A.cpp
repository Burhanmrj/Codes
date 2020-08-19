#include <iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[2] = { 0 };
	char p;
	for (int i = 0; i < n; i++)
	{
		cin >> p;
		if (p-'0' == 1)
			a[0]++;
		else
			a[1]++;
	}
	if (a[1] >= a[0])
		cout << a[1] - a[0];
	else
		cout << a[0] - a[1];
	return 0;


}