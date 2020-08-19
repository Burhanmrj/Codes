#include <iostream>
using namespace std;
int main()
{
	int n,x=0;
	cin >> n;
	char a[1001][5];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 5; j++)
			cin >> a[i][j];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (a[i][j] == 'O' && a[i][j + 1] == 'O')
			{
				cout << "YES" << endl;
				a[i][j] = '+';
				a[i][j + 1] = '+';
				x = 1;
				break;
			}
			
		}
		if (x)
			break;
	}
	if (x)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < 5; j++)
				cout << a[i][j];
			cout << endl;
		}
	}
	else
		cout << "NO";
	return 0;


}