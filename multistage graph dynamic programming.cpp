#include <iostream>
using namespace std;
int main()
{
	int stages = 4, min;
	int n = 8;
	int cost[9], d[9], path[9];
	int c[8][9] = { {0,0,0,0,0,0,0,0,0},{0,0,2,1,3,0,0,0,0},{0,0,0,0,0,2,3,0,0},{0,0,0,0,0,6,7,0,0},{0,0,0,0,0,6,8,9,0},{0,0,0,0,0,0,0,0,6},{0,0,0,0,0,0,0,0,4},{0,0,0,0,0,0,0,0,5} };
	cost[n] = { 0 };
	for (int i = n - 1; i > 0; i--)
	{
		min = 32767;
		for (int j = i + 1; j <= n; j++)
		{
			if (c[i][j] != 0 && c[i][j] + cost[j] < min)
			{
				min = c[i][j] + cost[j];
				d[i] = j;
			}
		}
		cost[i] = min;
	}
	path[1] = 1;
	path[stages] = n;
	for (int i = 2; i <= stages; i++)
	{
		path[i] = d[path[i - 1]];
	}
	for(int i=1;i<=stages;i++)
		cout << path[i]<<" ";
	return 0;
}