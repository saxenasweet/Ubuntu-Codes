#include<stdio.h>
void main(void)
{
int factorial(int num);
int n,r;
printf("Enter a number whose factorial you want?");
scanf("%d",&n);
r=factorial(n);
printf("Factorial of %d is %d\n",n,r);
}
int factorial(int num)
{
int count,fact=1;
for(count=1;count<=num;count++)
 fact=fact*count;
return fact;
}

