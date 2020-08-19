#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a[3] = { 0 };
	cin >> a[0] >> a[1] >> a[2];
	sort(a, a + 3);
	int count = a[2] - a[1] + a[1] - a[0];
	cout << count;
	return 0;
}