#include<stdio.h>
#include<string.h>
int fun(char*begin,char*end)
{
	if (begin==NULL||begin>end)
	{
		return 0;
	}
	while(begin<end)
	{
		if(*begin !=*end)
		{
			return 0;
		}
		begin++;
		end--;
	}
	return 1;
 } 
 int main()
 {
 	int length=0;
	char ch,str[50];
 	char*begin=NULL;
 	char*end=NULL;
 	printf("Please input a sttring:\n");
 	while((ch=getchar())!='n')
 	{
 		str[length]=ch;
 		length++;
	 }
	 begin=str;
	 end=&str[length-1];
	 
	if(fun(begin,end)==1)
	     printf("yes!\n");
	else
	     printf("no!\n");
    return 0;
 }
