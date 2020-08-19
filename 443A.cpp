#include<iostream>
#include<set>
using namespace std;
int main()
{
	set<char> a;
	char z{};
	int count{};
	while (z != '}')
	{
		cin >> z;
		a.insert(z);
	}
	for (auto it = a.begin(); it != a.end(); it++)
	{
		if (*it < 123 && *it>96)
			count++;
	}
	cout << count;
	return 0;
}