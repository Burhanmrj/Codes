#include<iostream>
#include<set>
#include<cstring>
using namespace std;
int main()
{
	char a[100];
	set<char>w;
	int i = 0;
	int size;
	cin >> size;
	while (i<size)
		cin >> a[i++];
	if (size < 26)
		cout << "NO";
	else
	{
		for (i = 0; i <size; i++)
			w.insert(toupper(a[i]));
		if (w.size() < 26)
			cout << "NO";
		else
			cout << "YES";

	}
	
	return 0;
	
}