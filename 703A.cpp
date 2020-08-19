#include <iostream>
using namespace std;
int main()
{
	int n, q = 0, w = 0;
	cin >> n;
	int a[200];
	for (int i = 0; i < 2*n; i+=2)
		cin >> a[i] >> a[i+1];
	for (int i = 0; i < 2*n; i+=2)
	{
		if (a[i] > a[i + 1])
			q++;
		else if (a[i] < a[i + 1])
			w++;
	}
	if (q > w)
		cout << "Mishka";
	else if (q < w)
		cout << "Chris";
	else
		cout << "Friendship is magic!^^";
	return 0;
}
