#include<iostream>
using namespace std;
void prefixsumalgo(int a[],int n)
{
	for (int i = 1; i < n; i++)
	{
		a[i] += a[i - 1];
	}
}
int main()
{
	int a[7] = {6,3,-2,4,-1,0,-5};
	int n = sizeof(a) / sizeof(a[0]);
	prefixsumalgo(a,n);
	for (int i = 0; i < n; i++)
		cout << a[i]<<" ";
	return 0;
}