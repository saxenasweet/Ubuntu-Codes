//1,1,2,3,5,8,13,21,.... - First 'n' Fibonacci series
#include<stdio.h>
void main(void)
{
int f=1,s=1,t;
int n;
scanf("%d",&n);
printf("Fibonacci Numbers are:-\n");
printf("%d\n%d\n",f,s);
n=n-2;
while(n>0)
{
t=f+s;
printf("%d\n",t);
f=s;
s=t;
n=n-1;
}
}

