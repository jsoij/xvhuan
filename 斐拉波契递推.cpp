//���Ʒ���
#include <stdio.h>

int main()
{
    int n;
    int i;
    int f[500];
    printf("������������е�Ԫ�ظ���Ϊ:",&n);
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
