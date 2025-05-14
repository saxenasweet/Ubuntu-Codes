#include<stdio.h>
void main(void)
{
int a,b,c;
printf("Enter two values?");
scanf("%d %d",&a,&b);
c=a;
a=b;
b=c;
printf("The swapped values are %d %d\n",a,b);
}


