#include<stdio.h>
void main(void)
{
int func(int);
printf("%d",func(7));
}
int func(int x)
{
printf("%d\n",x);
if(x>0)
 return func(x-1);
else
 return 0;
}
