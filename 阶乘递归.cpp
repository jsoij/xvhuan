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
        return  n * (n - 1);
}

int main()
{
    int n;
    while (cin >>  n)
    {
        cout << "n½×³ËÎª£º"<<f(n) << endl;
    }
    return 0;
}
