#include <iostream>
using namespace std;
void combo(char a[],int b[])
{
    int i = -1;
    while (a[i++] != '\0')
    {
        b[a[i] - 'A']++;
    }
}
int main()
{
    char a[100], b[100], c[100];
    int q[26] = { 0 }, w[26] = { 0 };
    int i = -1, z = 0;
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);
    fgets(c, sizeof(c), stdin);
    combo(a, q);
    combo(b, q);
    combo(c, w);
    while (i++ < 26)
    {
        if (q[i]!= w[i])
        {
            cout << "NO";
            z = 4;
            break;
        }
        else
            z = 1;
    }
    if (z == 1)
        cout << "YES";
    return 0;
    

}

