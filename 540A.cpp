#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,count=0;
	cin >> n;
	char a[1000], b[1000],z;
	for (int i = 0; i < n; i++)
	{
		cin >>z;
		a[i] = z - '0';
	}
	for (int i = 0; i < n; i++)
	{
		cin >> z;
		b[i] = z - '0';
	}
	for (int i = 0; i < n; i++)
	{
		count += min(abs(a[i] - b[i]), 10 - abs(a[i] - b[i]));
	}
	cout << count;
	return 0;

}