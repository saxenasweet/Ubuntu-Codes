#include<stdio.h>
void main(void)
{
int func(int n);
printf("%d\n",func(8));
}
int func(int n)
{
int d;
printf("%d\n",n);
if(n>0)
 d= func(n-1);
else
 return 0;
}

