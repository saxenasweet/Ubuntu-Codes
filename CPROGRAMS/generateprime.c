#include<stdio.h>
void main(void)
{
int n,a,r,factors=0;
for(n=2;n<=100;n=n+1)
{
for(a=1;a<=n;a=a+1)
{
r=n%a;
if(r==0)
 factors=factors+1;
}
if(factors==2)
 printf("\n%d Number is prime",n);
factors=0;
}
}
