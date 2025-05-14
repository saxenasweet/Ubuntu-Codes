#include<stdio.h>
void main(void)
{
int n,r,t,sum=0;
for(n=1;n<=1000;n=n+1)
{
t=n;
while(t>0)
{
r=t%10;
sum=sum+(r*r*r);
t=t/10;
}
if(sum==n)
 printf("%d is an Armstrong Number\n",n);
sum=0;
}
}


