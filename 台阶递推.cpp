#include <stdio.h>

int main()
{
    int n;
    int f[500];
    printf("Please Input:",&n);
    scanf("%d", &n);
    f[1] = 1;
    f[2] = 2;
    for (int i = 3; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    printf("Result:%d\n", f[n]);
    return 0;
    
}
