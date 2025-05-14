#include<stdio.h>
void main(void)
{
int sumfibo(int num);
int n;
scanf("%d",&n);
printf("Sum of %d Fibonacci Series is %d\n",n,sumfibo(n));
}

int sumfibo(int num)
{
int f,s,t;
int sum;
f=1;
s=1;
sum=f+s;
num=num-2;
while(num>0)
{
t=f+s;
sum=sum+t;
f=s;
s=t;
num--;
}
return sum;
}
