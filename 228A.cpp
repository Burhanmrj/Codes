#include<iostream>
#include<set>
using namespace std;
int main()
{
	set<int>b;
	int i = 0, z{}, j = 0;
	while (i<4)
	{
		cin >> z;
		b.insert(z);
		i++;
	}
	for (auto q = b.begin(); q != b.end(); q++)
		j++;
	cout << i - j;
	return 0;

}