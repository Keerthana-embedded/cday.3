#include<stdio.h>
#include<string.h>
int main()
{
char s1[30],s2[10];
char *p;
puts("enter string1");
gets(s1);
puts("enter string2");
gets(s2);
p=strstr(s1,s2);
printf("%u",p-s1);
}
