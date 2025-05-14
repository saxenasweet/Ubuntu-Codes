#include<stdio.h>
void main(void)
{
int fact(int n);
int result;
int number;
scanf("%d",&number);
result=fact(number);
printf("Factorial of %d is %d\n",number,result);
}
int fact(int n)
{
int x;
int r=1;
for(x=1;x<=n;x++)
 r=r*x;
return r;
}

