//..................................bubble sort.....................................
#include<stdio.h>
int main()
{
int a[10],n,temp,i;
printf("enter n");
scanf("%d",&n);
printf("enter array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n");
for(i=0;i<n-1;i++)
{
for(int j=0;j<n-1-i;j++)
{
	if(a[j]>a[j+1])
	{
	temp=a[j];
	a[j]=a[j+1];
       	a[j+1]=temp;
	}
}
}
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}
