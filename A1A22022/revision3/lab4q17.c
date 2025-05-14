#include<stdio.h>
void main(void)
{
int factorial(int x);
int n;
scanf("%d",&n);
printf("The factorial of %d is %d\n",n,factorial(n));
}
int factorial(int x)
{
int f=1;
int l;
for(l=1;l<=x;l++)
  f=f*l;
return f;
}

