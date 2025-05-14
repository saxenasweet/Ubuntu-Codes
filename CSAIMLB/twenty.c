#include<stdio.h>
void main(void)
{
int f1=1,f2=1,t,n=8;
printf("%d\n%d\n",f1,f2);
while(n>0)
{
t=f1+f2;
printf("%d\n",t);
f1=f2;
f2=t;
n--;
}
}
