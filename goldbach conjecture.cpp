// goldbach conjecture
// every prime no >2 can be expressed as sum of two prime no's
#include <iostream>
#include<vector>
#include<stdio.h>
using namespace std;
int is_prime(int);
int is_prime(int q)
{
    int flag = 1;
    for (int j = 2; j < q / 2; j++)
    {
        if (q % j == 0)
            return flag - 1;
    }
    return flag;
}
int main()
{
     int i = 2;
    for (int j = A - i; j >= 2; j--)
    {
        if (is_prime(i) == 1 && is_prime(j) == 1)
        {
            b.push_back(i);
            b.push_back(j);
            break;
        }
        i++;


    }
	return 0;
}