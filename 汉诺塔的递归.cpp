#include <iostream>
#include <cstdio>
using namespace std;
int HNU(int n, char a, char b, char c);
int num = 0;
int main()
{
 int n;
 printf("请输入汉诺塔的层数：");
 cin >> n;
 HNU(n, 'A', 'B', 'C');
 printf("共移动了 %d 次。\n", num);
 return 0;
}
int HNU(int n, char a, char b, char c)
{
 if (n == 0)
 {
 }
 else
 {
  HNU(n - 1, a, b, c);
  printf("第%d步：  将 %d 号圆盘从 %c 移至 %c \n",num+1, n, a, b);
  num++;
  HNU(n - 1, c, b, a); 
 }
 return 0;
}
