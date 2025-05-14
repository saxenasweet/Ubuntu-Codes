#include<stdio.h>
void main(void)
{
int a=1;
x:
printf("%d\n",a);
a=a+1;
if(a<11) goto x;
}

