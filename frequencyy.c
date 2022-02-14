
//............................frequency of element in array...................................
#include<stdio.h>
#include<string.h>
void frequency(int *);
int main()
{
int arr[10],n,i;
printf("enter no of elements");
scanf("%d",&n);
puts("enter array elements");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
arr[i]='\0';
frequency(arr);
}
void frequency(int *p)
{
int cnt,i,j,k,f=0,m=0;
int arr[10];
int *q;
q=p;
for(i=0;p[i];i++)
{
cnt=1;
f=0;
for(j=i+1;q[j];j++)
{		
if(*(p+i)==*(q+j))
{
cnt++;
arr[i]=0;
}
}

if(f==0)
printf("%d is printed %d times\n",p[i],cnt);
}
}
