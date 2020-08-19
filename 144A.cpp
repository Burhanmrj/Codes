#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int max(int a[])
{
    int max = a[0];
    int i = 0;
    while (a[i++] != 0)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}
int min(int a[])
{
    int min = a[0];
    int i = 0;
    while (a[i++] != 0)
    {
        if (a[i] < min)
            min = a[i];
    }
    return min;
}
int main()
{
    int a[101] = { 0 };
    int n,swaps=0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        if (max(a) == a[0] && min(a) == a[n - 1])
            break;
        if (a[i] < a[i + 1])
        {
            swap(a[i], a[i + 1]);
            swaps++;
        }
        
    }
    cout << swaps;
}

