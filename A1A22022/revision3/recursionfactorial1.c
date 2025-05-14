#include<stdio.h>
void main(void)
{
int fact(int n);
int num;
scanf("%d",&num);
printf("the factorial of %d is %d\n",num,fact(num));
}
int fact(int n)
{
if(n>1)
  return n*fact(n-1);
else
  return 1;
}

