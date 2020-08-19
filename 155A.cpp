#include <iostream>
using namespace std;
int max(int a[],int i)
{
	int m = a[0];
	int n=0;
	for (int j = 0; j < i+1; j++)
	{
		if (a[j] > m)
		{
			m = a[j];
			n = j;
		}
	}
	return n;
}
int min(int a[], int i)
{
	int m = a[0];
	int n=0;
	for (int j = 0; j < i+1; j++)
	{
		if (a[j] < m)
		{
			m = a[j];
			n = j;
		}
	}
	return n;
}
int main()
{
	int n,count=0;
	int a[1000];
	cin >> n;
	cin >> a[0];
	for (int i = 1; i < n; i++)
	{
		cin >> a[i];
		if (max(a,i) == i)
			count++;
		if (min(a,i) == i)
			count++;
	}
	cout << count;
}
