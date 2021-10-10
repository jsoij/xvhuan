#include <stdio.h>

int main()
{
    int n,i;
    int sum=1;
    printf("Please Input:",&n);
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        sum=sum*i;
    }
    printf("Result:%d\n", sum);
    return 0;
    
}
