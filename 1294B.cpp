#include <iostream>
#include<map>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		map<int, int>a;
		int n;
		cin >> n;
		int x, y;
		for (int i=0;i<n;i++)
		{
			cin >> x >> y;
			a.insert(pair<int, int>(x, y));
		}
		for (auto i = a.begin(); i != a.end(); i++)
			cout << i->first<<" "<<i->second;

	}
}

