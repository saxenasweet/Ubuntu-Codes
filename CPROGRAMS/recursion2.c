#include<stdio.h>
void main(void)
{
int fac(int x);
printf("%d",fac(5));
}
int fac(int x)
{
if(x>0)
 return x*fac(x-1);
else
 return 1;
}
