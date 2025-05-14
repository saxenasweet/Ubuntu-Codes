#include<stdio.h>
void main(void)
{
int n,d,sum=0,t;
//printf("Enter a number you want me to check whether it is Armstrong or not?");
//scanf("%d",&n);
for(n=100;n<=500;n=n+1)
{
t=n;
while(t>0)
{
d=t%10;
sum=sum+(d*d*d);
t=t/10;
}
if(n==sum)
 printf("Armstrong Number %d\n",n);
sum=0;
}
}
