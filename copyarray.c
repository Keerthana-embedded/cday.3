//........................copying integer from one array to another array.................................
#include<stdio.h>
int main()
{int i;
/*	
int a1[5];
int a2[5];
int i;
printf("enter elements");
for(i=0;i<5;i++)
{
scanf("%d",&a1[i]);
}
a1[i]='\0';
//.......copy...........
for(i=0;a1[i]!='\0';i++)
{
a2[i]=a1[i];
}
//.......print..........
printf("elements in array-2");
for(i=0;a1[i]!='\0';i++)
{
printf("%d",a2[i]);
printf("\n");
}*/
//.........................copying charector from one array to another array........................................
char ar1[20],ar2[20];
printf("enter elements");
scanf("%s",ar1);
//.......copy...........
for(i=0;ar1[i]!='\0';i++)
{
ar2[i]=ar1[i];
}
ar2[i]='\0';
//.......print..........
printf("charectors in array-2");
puts(ar2);
printf("\n");
}
