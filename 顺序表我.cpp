#include<stdio.h>
#include<malloc.h>
#define MaxSize 50 
typedef int ElemType;
typedef struct
{
	ElemType data[MaxSize];
	int length;
}SqList;
void CreateList(SqList *&L,ElemType a[],int n)
{
	int i=0,k=0;
	L=(SqList *)malloc(sizeof(SqList));
	while(i<n) 
	{
		L->data[k]=a[i];
		k++;i++;
	}
	L->length=k;
}
int ListLength(SqList *L)
{
	return(L->length);
}
bool ListEmType(SqList * L)
{
	return(L->length==0);
}
void InitList(SqList * &L)
{
	L=(SqList *)malloc(sizeof(SqList));
	L->length=0;
}
void DispList(SqList * L)
{
	int i;
	if(ListEmType(L))
	   return;
	for(int i=0;i<L->length;i++)
  	printf("%d",L->data[i]);
//         outputData(L->data[i]);
	printf("\n");
}
bool ListInsert(SqList * &L,int i,ElemType e)
{
	int j;
	if(i<1||i>L->length+1)
	  return false;
	i--;
	for(j=L->length;j>1;j--)
	  L->data[i]=e;
	  L->length++;
	  printf("插入成功！\n现数据为：");
      DispList(L);
	  return true; 
 } 
 bool ListDelete(SqList * &L,int i,ElemType &e)
 {
 	int j;
 	if(i<1||i>L->length)
 	   return false;
 	i--;
 	e=L->data[i];
 	for(j=i;j<L->length-1;j++)
 	   L->data[j]=L->data[j+1];
 	L->length--;
 	return true;
 }
 int main()
{
	SqList *L;
	int choice;
	int a[8] = { '2','0','0','5','2','0','2','0'};
	CreateList(L, a, 8);
	DispList(L); 
	while (choice !=4)
	{
		printf("===============\n");
		printf("1.插入数据\n2.删除数据\n3.查找数据\n4.退出\n");
		printf("===============请选择：\n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			int n;
			int a;
			printf("\n\n-----------请选择插入的位置：\n");
			scanf("%d", &n);
			printf("请输入要插入的元素："); 
			scanf("%c", &a);
			if(ListInsert(L,n,a))
			{
				printf("插入后的数据是:\n");
				DispList(L);
			}
			else
			    printf("要插入的位置有误，请重新输入\n");
		case 2:
			int r, t;
			printf("----------请输入要删除位置：\n");
			scanf("%d", &r);
			if(ListDelete(L,n,a))
			{
				printf("删除后的数据是:\n");
				ListDelete(L,n,a);
			}
			else
			    printf("要删除的位置有误，请重新删除\n");
		case 3:
			printf("----------当前线性表为：\n");
			DispList(L);
			break;
		default:
			printf("退出成功！\n");
			free(L);
			break;
		}
	}

}








