#include<iostream>
using namespace std;
int check(char a[])
{
	int b = 0, c = 0,i=0;
	//
	while(a[i]!='\0')
	{
		if (a[i] == '0')
		{
			if (c != 0)
			{
				b = 0;
				c = 0;
			}
			b++;
		}
		else
		{
			if (b != 0)
			{
				c = 0;
				b = 0;
			}
			c++;
		}
		if (b >= 7 || c >= 7)
			return 1;
		
		i++;
	}
	return 0;
}
int main()
{
	char a[100];
	int i = 0;
	fgets(a, sizeof(a), stdin);
	if (check(a))
		cout << "YES";
	else
		cout << "NO";
	return 0;

}