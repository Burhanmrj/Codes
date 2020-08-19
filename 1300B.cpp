#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int t,n,q;
	vector<int>a = { 0 };
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (int i = 1; i <= 2 * n; i++)
		{
			cin >> q;
			a.push_back(q);
		}
		sort(a.begin(), a.end());
		cout << a[n + 1] - a[n] << endl;
		a = { 0 };
	}
	return 0;



}