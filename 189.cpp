#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n, a[3] = { 0 };
	cin >> n;
	for (int i = 0; i < 3; i++)
		cin >> a[i];
	int len =1;
	sort(a, a+3);
		if (n >=a[0] + a[1])
			len = 2;
		if (n >= a[1] + a[2])
			len = 2;
		if (n >= a[0] + a[2])
			len = 2;
		if (n >= a[0] + a[1] + a[2])
			len = 3;
		cout << len;
	return 0;

}