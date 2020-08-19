#include <iostream>
using namespace std;
int main()
{
	int n,count=0;
	cin >> n;
	while (n)
	{
		if (n >= 100)
		{
			count += n / 100;
			n %= 100;
		}
		else if (n >= 20)
		{
			count += n / 20;
			n %= 20;
		}
		else if (n >= 10)
		{
			count += n / 10;
			n %= 10;
		}
		else if (n >= 5)
		{
			count += n / 5;
			n %= 5;
		}
		else
		{
			for (int i = 1; i <=n; i++)
				count++;
			n = 0;
		}
	}
	cout << count;
	return 0;

}