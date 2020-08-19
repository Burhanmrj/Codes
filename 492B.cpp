#include<iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int cont = -1;
	for (int i = 1; i < n + 1; i++)
	{
		cout << endl;
		for (int j = 1; j < m + 1; j++)
		{
			if(i%2!=0)
				cout << '#';
			else
			{
				if (cont%2!=0)
				{
					if (j == m)
						cout << "#";
					else
						cout << ".";
				}
				else
				{
					if (j == 1)
						cout << "#";
					else
						cout << ".";
				}
				cont++;
			}
		}
	}
}