//递推方法
#include <stdio.h>

int main()
{
    int n;
    int i;
    int f[500];
    printf("当斐拉波契数列的元素个数为:",&n);
    scanf("%d", &n);
    f[1] = 1;
    f[2] = 1; 
    printf("1\n1\n");
    for (int i = 3; i <= n; i++)
    {
    	
        f[i] = f[i - 1] + f[i - 2];
        printf("%d\n",f[i]);
        
    }
}
