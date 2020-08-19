#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,count=0,z;
	int a[100000];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int q;
	cin >> q;
	int *b=new int[100000];
	/*for (int i = 0; i < q; i++)
		cin >> b[i];*/
	sort(a, a + n);
	for (int i = 0; i < q; i++)
	{
		cin >> z;
		cout<< upper_bound(a, a + n,z)-a<<endl;
	}
	return 0;
}