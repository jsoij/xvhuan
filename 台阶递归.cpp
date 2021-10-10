
#include <iostream>
#include <cstdlib>
using namespace std;
int f(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    else
        return f(n - 1) + f(n - 2);
}

int main()
{
    int n;
    while (cin >>  n)
    {
        cout << "台阶的走法一共有："<<f(n) << endl;
    }
    return 0;
}
