#include <iostream>
#include <cstdio>
using namespace std;
int HNU(int n, char a, char b, char c);
int num = 0;
int main()
{
 int n;
 printf("�����뺺ŵ���Ĳ�����");
 cin >> n;
 HNU(n, 'A', 'B', 'C');
 printf("���ƶ��� %d �Ρ�\n", num);
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
  printf("��%d����  �� %d ��Բ�̴� %c ���� %c \n",num+1, n, a, b);
  num++;
  HNU(n - 1, c, b, a); 
 }
 return 0;
}
