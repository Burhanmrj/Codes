#include<iostream>
using namespace std;
int main()
{
	char a[50];
	int n;
	cin >> n;
	n++;
	int sum = 0;
	while (n--)
	{
		fgets(a, sizeof(a), stdin);
		if (a[0] == 'T')
			sum += 4;
		else if (a[0] == 'C')
			sum += 6;
		else if (a[0] == 'O')
			sum += 8;
		else if (a[0] == 'D')
			sum += 12;
		else if (a[0] == 'I')
			sum += 20;
	}
	cout << sum;
	return 0;
}
