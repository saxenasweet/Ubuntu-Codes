#include<stdio.h>
void main(void)
{
int fibo(int n);
int num;
int sum=0;
int loop;
scanf("%d",&num);
for(loop=1;loop<=num;loop++)
{
sum=sum+fibo(loop);
}
printf("Sum = %d\n",sum);
}
int fibo(int n)
{
if((n==1)||(n==2))
 return 1;
else
 return fibo(n-1)+fibo(n-2);
}

