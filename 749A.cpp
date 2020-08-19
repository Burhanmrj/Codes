#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = n / 2;
    cout << a << endl;
    if (n % 2 == 0)
    {
        for (int i = 1; i <= a; i++)
            cout << 2 << " ";
    }
    else
    {
        for (int i = 1; i < a; i++)
            cout << 2 << " ";
        cout << 3;
    }
    return 0;

}