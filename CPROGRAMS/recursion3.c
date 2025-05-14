#include<stdio.h>
void main(void)
{
int fibo(int x);
printf("%d",fibo(6));
}
int fibo(int x)
{
if(x==1)
 return 1;
else if (x==2)
 return 1;
else
 return fibo(x-1)+fibo(x-2);
}
