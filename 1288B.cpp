#include <iostream>
using namespace std;
int main()
{
    int a;
    long long int b, c,p=0;
    cin >> a;
    while (a)
    {
       
        cin >> b >> c;
        for (int i = 9; i <= c; i=i*10 + 9)
            p++;
        cout << b *p << endl;
        p = 0;
        a--;
    }
}

