#include <iostream>
using namespace std;
int max(int a[],int n)
{
    int m=-1;
    for (int i = 0; i < n; i++)
    {
        if (m < a[i])
            m = a[i];
    }
    return m;
}
int main()
{
    int a[1000];
    int n,sum=0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int m = max(a, n);
    for (int i = 0; i < n; i++)
    {
        a[i] = m - a[i];
        sum += a[i];
    }
    cout << sum;
    return 0;
}