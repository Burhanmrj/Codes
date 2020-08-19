#include <iostream>
using namespace std;
int main()
{
	int n;
	int a[100000] = { 0 };
	cin >> n;
	int i = 0;
	for(i;i<n;i++)
		cin >> a[i];
	int count = a[0];
	int unsol{ 0 };
	for (i = 1; i <=n; i++)
	{
		if (count >= 0)
			count += a[i];
		else
		{
			count = a[i];
			unsol++;
		}
	}
	cout << unsol;
	return 0;

}