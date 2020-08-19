
#include<iostream>
using namespace std;
int main()
{
	int a, x[100], p = 0;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> x[i];
		if (x[i] == 1)
		{
			p = 1;
			cout << "HARD";
			break;
		}
	}
	if (p == 0)
		cout << "EASY";
	return 0;

}