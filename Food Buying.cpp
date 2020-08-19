#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t,s,a,i=1;
	cin >> t;
	while (t--)
	{
		cin >> s;
		a = s;
		if (s < 10)
			cout << s<<endl;
		else
		{
			
			while (a > 1000000000)
			{
				a += s/pow(10,i);
				i++;
			}
			cout << a + s<<endl;
		}

	}
	return 0;

}