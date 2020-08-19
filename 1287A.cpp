#include<iostream>
using namespace std;
int check(char a[],int x)
{
	int i = 0,j=0;
	int b[100] = { 0 };
	while (i<x)
	{
		if (a[i] == 'A' && a[i+1]=='P')
		{
			b[j] = i;
			i++;
			j++;
		}
		else
			i++;
	}
	//int size1 = sizeof(b) / sizeof(b[0]);
	i = 0;
	for(i=0;i<j;i++)
	{
		a[b[i] + 1] = 'A';
	}
	if (j!= 0)
		return 1+check(a,x);
	return 0;
}
int main()
{
	int n,x;
	char a[100];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin>> x;
		for (int j = 0; j < x; j++)
		{
			cin >> a[j];
		}
		cout<< check(a,x)<<endl;
	}
	
	return 0;

}