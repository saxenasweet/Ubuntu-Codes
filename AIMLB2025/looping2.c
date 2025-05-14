#include<stdio.h>
void main(void)
{
int a=1,b=a;
while(a<=10)
{
printf("%d\n",b);
b=a++;
}
}

