#include <iostream>
using namespace std;
int main()
{
    int a[100];
    int matched[2] = { 0 };
    int unmatched[2] = { 0 };
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            matched[0] = i;
            matched[1]++;
        }
        else
        {
            unmatched[0] = i;
            unmatched[1]++;
        }
           
    }
    if (matched[1] == 1)
        cout << matched[0]+1;
    else 
        cout << unmatched[0]+1;
    return 0;
}

