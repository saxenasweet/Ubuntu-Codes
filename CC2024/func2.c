#include<stdio.h>
void main(void)
{
int n;
int fact(int n);
scanf("%d",&n);
printf("Factorial of %d is %d\n",n,fact(n));
}
int fact(int n)
{
int i,f=1;
for(i=1;i<=n;i++)
 f=f*i;
return f;
}

