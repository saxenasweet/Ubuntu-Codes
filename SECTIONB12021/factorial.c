#include<stdio.h>
void main(void)
{
int n;
int i=1;
int result=1;
scanf("%d",&n);
while(i<=n)
{
result=result*i;
i=i+1;
}
printf("\nFactorial of %d is %d \n",n,result);
}

