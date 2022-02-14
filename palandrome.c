//................................palandrome................................
#include<stdio.h>
#include<string.h>
int palandrome(char *);
int main()
{
char a[20];
puts("enter string");
gets(a);
palandrome(a);
}
int palandrome(char *p)
{
char *q;
int n=strlen(p),i,j=n;
q=p;
for(i=0,j=n-1;i<j;i++,j--)
{
if(*(p+i)!=*(q+j))
{

printf("not palandrome");
return 0;
}
}
printf("palandrome");
}
