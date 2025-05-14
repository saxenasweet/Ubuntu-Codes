#include<stdio.h>
void main(void)
{
int fibo(int n);
int num;
scanf("%d",&num);
printf("%d\n",fibo(num));
}
int fibo(int n)
{
if((n==1)||(n==2))
 return 1;
else
 return fibo(n-1)+fibo(n-2);
}

