#include<iostream>
int main()
{
	int a[10000] = { 0 };
	int n, i = 1;
	std::cin >> n;
	a[0] = 1;
	while (n > a[i - 1])
	{
		a[i] =a[i-1]+i+1;
		n -= a[i];
		i++;
		
	}
	i = 0;
	while (a[i] != 0)
		i++;
	std::cout << i;
	return 0;

}