#include<stdio.h>
void main(void)
{
int fact(int n);
int a;
printf("Enter a number whose factorial you want?");
scanf("%d",&a);
printf("The factorial of %d is %d\n",a,fact(a));
}
int fact(int n)
{
int b;
int fact=1;
for(b=1;b<=n;b++)
 fact=fact*b;
return fact;
}

