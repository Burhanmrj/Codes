#include<iostream>
using namespace std;
void prime(int n)
{
	bool a[1000];
	for (int i = 0; i < sizeof(a);i++)
		a[i] = true;
	for (int i = 2; i * i <= n; i++)
	{
		if (a[i])
		{
			for (int j = i * i; j <= n; j+=i)
			{
				a[j] = false;
			}
		}
	}
	for (int i = 2; i <= n; i++)
	{
		if (a[i])
			cout << i<<" ";
	}
}
int main()
{
	int a;
	cin >> a;
	prime(a);
	return 0;
}