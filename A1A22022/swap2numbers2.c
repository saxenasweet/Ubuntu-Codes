/*
a=6
b=3
a=a+b ->a=9
b=a-b ->b=6
a=a-b ->a=3
*/
#include<stdio.h>
void main(void)
{
int a,b;
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("%d %d\n",a,b);
}
