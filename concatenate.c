//.........................concatenate two strings and print length...............................
#include<stdio.h>
#include<string.h>
char * mystrcat(char *,const char *);
int main()
{
char s1[20],s2[20],*p;
int n;
puts("enter string1");
scanf("%s",s1);
puts("enter string2");
scanf("%s",s2);
p=mystrcat(s1,s2);
puts(s1);
n=strlen(s1);
printf("\n");
printf("%d",n);
}
char *mystrcat(char *dest,const char *src)
{
int p=strlen(dest),i,j=0;
for(i=p;src[j]!='\0';i++,j++)
{
*(dest+i)=*(src+j);
}
*(dest+i)='\0';
return dest;
}
