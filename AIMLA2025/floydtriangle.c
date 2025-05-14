#include<stdio.h>
void main(void)
{
int a=1,b,c,n;
printf("Enter the number of rows you want me to fill in Floyd Triangle?");
scanf("%d",&n);
for(b=1;b<=n;b++)
{
for(c=1;c<=b;c++)
{
 printf("%d",a);
 a++;
}
printf("\n");
}
}

