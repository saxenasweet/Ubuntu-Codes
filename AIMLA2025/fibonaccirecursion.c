#include<stdio.h>
int main(void)
{
int fibo(int);
int x;
scanf("%d",&x);
printf("The %dth Fibonacci term is %d\n",x,fibo(x));
return 0;
}
int fibo(int n)
{
int g=0;
if((n==1)||(n==2))
 return 1;
else 
 g=fibo(n-1)+fibo(n-2);
return g; //return the nth fibonacci term
}

