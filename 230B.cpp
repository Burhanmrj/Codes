#include <iostream>
#include<vector>
#include<map>
typedef long long ll;
const int large=1000000;
using namespace std;
map<long long int,bool> b;
void primesq()
{
    vector<bool> a;
    a.resize(large+1,true);
    a[0] = a[1] = false;
    for (int i = 2; i * i <=large; i++)
    {
        if (a[i])
        {
            for (int j = i * i; j <=large; j += i)
                a[j] = false;
        }
    }
    for (long long int i = 2; i <large; i++)
    {
        if (a[i])
            b[1ll *i * i]=true;
    }
}
int main()
{
    long long int n,q;
    cin >> n;
    primesq();
    while (n--)
    {
        cin >> q;
        if (b[q])
            cout << "YES";
        else
            cout<<"NO";
        cout << endl;
    }
    return 0;
}
