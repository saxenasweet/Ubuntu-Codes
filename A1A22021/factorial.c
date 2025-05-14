#include<stdio.h>
void main(void)
{
int n,fact=1,i;
printf("Enter a number whose factorial you want?");
scanf("%d",&n);
for(i=1;i<=n;i=i+1)
{
fact=fact*i;
}
printf("Factorial of %d is %d\n",n,fact);
}

