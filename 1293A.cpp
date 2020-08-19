#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int>a;
    while (t--)
    {
        int s, n, k;
        cin >> n >> s >> k;
        a.resize(k);
        for (auto& z : a)
            cin >> z;
        for (int i = 0; i <= k;i++)
        {
            if ((s - i) >= 1 && find(a.begin(), a.end(), (s - i)) ==a.end())
            {
                cout << i << endl;
                break;
            }
            if ((s + i) <= n && find(a.begin(), a.end(), (s + i)) ==a.end())
            {
                cout << i << endl;
                break;
            }   
        }
    }
    return 0;

}

