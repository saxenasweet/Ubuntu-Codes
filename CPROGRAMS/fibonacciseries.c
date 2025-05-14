#include<stdio.h>
void main(void)
{
int f1=1,f2=1,t,n;
printf("\n%d\n%d\n",f1,f2);
for(n=1;n<=28;n=n+1)
{
t=f1+f2;
printf("%d\n",t);
f1=f2;
f2=t;
}
}
