#include<stdio.h>
void main(void)
{
int i;
int f=1;
int n;
printf("Enter a number whose factorial you want?");
scanf("%d",&n);
for(i=1;i<=n;i=i+1)
{
 f=f*i;
}
printf("Factorial of %d is %d\n",n,f);
}
