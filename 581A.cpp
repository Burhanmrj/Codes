#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << b<<" ";
        int c = a - b;
        cout << c / 2;
    }
    else
    {
        cout << a<<" ";
        int c = b - a;
        cout << c / 2;
    }
    return 0;
}
