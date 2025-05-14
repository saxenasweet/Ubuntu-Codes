#include<stdio.h>
void main(void)
{
int n,r,t,sum=0;
printf("Enter a number whose sum of digits you want?");
scanf("%d",&n);
t=n;
while(t>0)
{
r=t%10;
sum=sum+r;
t=t/10;
}
printf("Sum of %d number is  %d\n",n,sum);
}

