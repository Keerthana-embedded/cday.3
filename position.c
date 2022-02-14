#include<stdio.h>
void insert(int *,int,int);
void delete(int *,int);
void get(int *,int);
int main()
{
	int arr[10],i,num,n,pos;
	printf("enter array elements\n");
        for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter position");
	scanf("%d",&pos);
	printf("enter n value 1:insert\n 2:delete\n 3:get\n");
	scanf("%d",&n);
	switch(n)
	{
	case 1:printf("enter number");
	      scanf("%d",&num);
	      insert(arr,num,pos);
	       break;
	case 2:delete(arr,pos);
	       break;
	case 3:get(arr,pos);
	       break;
	}
}
void insert(int *p,int n,int k)
{
	int i;
        for(i=0;i<5;i++)
	{
           if(i==k)
	   {
		   *(p+i)=n;
	   break;
	   }
	}
	for(i=0;i<5;i++)
		printf("%d\n",p[i]);

}

void delete(int *p,int k)
{
	int i;
        for(i=0;i<5;i++)
	{
           if(i==k)
	   {
		   for(int j=k;j<4;j++)
		   *(p+j)=*(p+j+1);
	   }
	}
	for(i=0;i<4;i++)
		printf("%d\n",p[i]);
}


void get(int *p,int k)
{
	int i;
        for(i=0;i<5;i++)
	{
           if(i==k)
	   {
		printf("%d\n",p[i]);
		break;
	   }

	}
}
