#include<stdio.h>
void main(void)
{
int n,r,sum=0;
scanf("%d",&n);
while(n>0)
{
r=n%10;
sum=sum+r;
n=n/10;
}
printf("Sum of digits = %d\n",sum);
}

