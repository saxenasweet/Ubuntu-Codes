#include<stdio.h>
void main(void)
{
int n,r,t,sum=0;
printf("Enter a number you want to check if it is an Armstrong Number or not?");
scanf("%d",&n);
t=n;
while(t>0)
{
r=t%10;
sum=sum+(r*r*r);
t=t/10;
}
if(sum==n)
 printf("%d is an Armstrong Number\n",n);
else
 printf("%d is not an Armstrong Number\n",n);
}

