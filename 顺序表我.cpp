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
	  printf("����ɹ���\n������Ϊ��");
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
		printf("1.��������\n2.ɾ������\n3.��������\n4.�˳�\n");
		printf("===============��ѡ��\n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			int n;
			int a;
			printf("\n\n-----------��ѡ������λ�ã�\n");
			scanf("%d", &n);
			printf("������Ҫ�����Ԫ�أ�"); 
			scanf("%c", &a);
			if(ListInsert(L,n,a))
			{
				printf("������������:\n");
				DispList(L);
			}
			else
			    printf("Ҫ�����λ����������������\n");
		case 2:
			int r, t;
			printf("----------������Ҫɾ��λ�ã�\n");
			scanf("%d", &r);
			if(ListDelete(L,n,a))
			{
				printf("ɾ�����������:\n");
				ListDelete(L,n,a);
			}
			else
			    printf("Ҫɾ����λ������������ɾ��\n");
		case 3:
			printf("----------��ǰ���Ա�Ϊ��\n");
			DispList(L);
			break;
		default:
			printf("�˳��ɹ���\n");
			free(L);
			break;
		}
	}

}








