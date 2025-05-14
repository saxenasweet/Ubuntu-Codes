#include<stdio.h>
void main(void)
{
int sumoffibo(int n);
int f=1,s=1,t;
int n;
int tsum;
scanf("%d",&n);
tsum=sumoffibo(n);
printf("Sum = %d\n",tsum);
}
int sumoffibo(int n)
{
int f=1,s=1,t;
int sum=f+s;
n=n-2;
while(n>0)
{
t=f+s;
sum=sum+t;
f=s;
s=t;
n--;
}
return sum;
}
