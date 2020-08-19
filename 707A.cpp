#include <iostream>
using namespace std;
int main()
{
	int n, m,x=0;
	cin >> n >> m;
	char a[101][101];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			if (a[i][j] != 'W' && a[i][j] != 'G' && a[i][j] != 'B')
			{
				cout << "#Color";
				x = 1;
				break;
			}
		if (x==1)
			break;
	}
	if (!x)
		cout << "#Black&White";
	return 0;
}