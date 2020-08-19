#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n, k, j = 0, q;
	int a[2000];
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	for (int i = 0; i < n; i++)
	{
		if (a[i] + k <= 5)
			j++;
	}
	q = j / 3;
	cout << q;
	return 0;


}
