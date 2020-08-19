#include <iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	cout << endl;
	n += 1;
	while (n--)
	{
		int i = 0;
		char a[1002];
		fgets(a, sizeof(a), stdin);
		while (a[i] != '\0')
			i++;
		i -= 2;
		if (a[i] == 'o')
			cout << "FILIPINO" << endl;
		if (a[i] == 'u')
			cout << "JAPANESE" << endl;
		if(a[i]=='a')
			cout << "KOREAN" << endl;
	}


}