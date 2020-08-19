#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n > 0)
		cout << n;
	else
	{
		int a = -(n / 10);
		//int c = -(n / 10);
		int b = -(n % 10);
		n /= 100;
		n = -(n * 10) + b;
		if (n > a)
			cout << -a;
		else
			cout<<-n;
	}
	return 0;
}