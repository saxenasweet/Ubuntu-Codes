#include<stdio.h>
void main(void)
{
void fibo(int n);
int x;
scanf("%d",&x);
fibo(x);
}
void fibo(int n)
{
int f1=1,f2=1,nt=2,t;
printf("%d\n%d\n",f1,f2);
while(nt<n)
{
t=f1+f2;
printf("%d\n",t);
f1=f2;
f2=t;
nt++;
}
}

