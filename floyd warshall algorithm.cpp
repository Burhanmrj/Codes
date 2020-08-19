#include<iostream>
#include<algorithm>
using namespace std;
constexpr int infi=36667;
int main()
{
	int a[4][4] = { {0,3,infi,7}, { 8,0,2,infi }, { 5,infi,0,1 }, { 2,infi,infi,0 } };
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int z = 0; z < 4; z++)
				a[j][z] = min(a[j][z],a[j][i]+ a[i][z]);
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			cout << a[i][j]<<" ";
		cout << endl;
	}
	return 0;
}