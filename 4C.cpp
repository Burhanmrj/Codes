#include <iostream>
#include<set>
#include<cstring>
#include<algorithm>
using namespace std;
string con(string a, char i)
{
    
    a = a + i;
    return a;
}
int main()
{
    set<string>a;
    int n;
  
    string b, c;
    cin >> n;
    while (n--)
    {
        char i = '1';
        cin >> b;
        if (find(a.begin(), a.end(), b) == a.end())
        {
            a.insert(b);
            cout << "OK"<<endl;
        }
        else
        {
            c=con(b, i);
            while (i-'0' < sizeof(a))
            {
                if (find(a.begin(), a.end(), c) != a.end())
                {
                    i++;
                    break;
                }
                else
                    break;
            }
            b = con(b, i);
            a.insert(b);
            cout << b<<endl;
        }

    }
    return 0;

}
