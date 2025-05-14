#include<stdio.h>
void main(void)
{
int a;
int b;
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("%d %d\n",a,b);
}

