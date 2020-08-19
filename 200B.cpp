#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	double x=0;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b;
		x += b;
	}
	cout << x / a;
	return 0;
	

}