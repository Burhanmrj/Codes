#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int m;
    m = a + b + c;
    m = max(m, a * b * c);
    m = max(m, a * (b + c));
    m = max(m, (a + b) * c);
    m = max(m, a + b * c);
    m = max(m, a * b + c);
    cout << m;
    return 0;
}
