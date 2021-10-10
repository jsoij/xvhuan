#include<stdio.h>
int fun(int n, char zjz,int a){
if(n>a){
printf("%c%d", zjz,1);
zjz='+';
fun(n-1,zjz,a);
}else
printf("%c%d",zjz,n);
}
int main(){
int i,n;
char zjz;
printf("n=");
scanf("%d", &n);
for(i=1; i<=n; i++){
zjz=' ';
printf("%d=",n);
fun(n,zjz,i);
printf("\n");
}
}
