#include <iostream>
#include<set>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		set<int>a;
		for (int i = 2; i * i <= n; i++)
		{
			if (n % i == 0 && !a.count(i))
			{
				a.insert(i);
				n /= i;
				break;
			}
		}
		for (int i = 2; i * i <= n; i++)
		{
			if (n % i == 0 && !a.count(i))
			{
				a.insert(i);
				n /= i;
				break;
			}
		}
		if (a.size() < 2 || a.count(n) || n == 1)
			cout << "NO" << endl;
		else
		{
			a.insert(n);
			cout << "YES" << endl;
			for (auto i = a.begin(); i != a.end(); i++)
				cout << *i << " ";
		}
		cout << endl;
	}
	return 0;
}