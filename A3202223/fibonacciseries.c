#include<stdio.h>
void main(void)
{
int f=1,s=1,t,n;
scanf("%d",&n);
printf("%d\n%d\n",f,s);
n=n-2;
while(n>0)
{
t=f+s;
printf("%d\n",t);
f=s;
s=t;
n--;
}
}

