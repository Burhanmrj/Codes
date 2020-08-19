#include <iostream>
#include<cstring>
#pragma warning(disable : 4996)
int c = 0, q = 0;
void count(char a[])
{
    int i = 0;
    while (i<strlen(a)-1)
    {
        if (a[i] < 97)
            c++;
        else
            q++;
        i++;
    }
}
using namespace std;
int main()
{
    char a[103];
    fgets(a, sizeof(a), stdin);
    count(a);
    if (c > q)
        strupr(a);
    else
        strlwr(a);
    fputs(a, stdout);
    return 0;
}