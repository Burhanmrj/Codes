#include<iostream>
using namespace std;
void sort(int a[],int n,int b[])
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n - i-1; j ++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				temp = b[j];
				b[j] = b[j + 1];
				b[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int s, n;
	cin >> s >> n;
	int a[1000];
	int b[1000];
	int t = 0;
	for (int i = 0; i < n; i++)
		cin >> a[i]>>b[i];
	sort(a, n, b);
	for (int i = 0; i < n; i++)
	{
		if (s > a[i])
		{
			s += b[i];
			t = 1;
		}
		else
		{
			cout << "NO";
			t = 0;
			break;
			
		}
	}
	if (t)
		cout << "YES";

}