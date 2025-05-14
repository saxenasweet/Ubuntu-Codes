#include<stdio.h>
void main(void)
{
int n,fact=1,i,t,sum=0;
printf("Enter a number up to which you want me to calculate the sum?");
scanf("%d",&n);
for(t=1;t<=n;t=t+1)
{
for(i=1;i<=t;i=i+1)
{
fact=fact*i;
}
sum=sum+fact;
fact=1;
}
printf("Sum of Series is %d\n",sum);
}

