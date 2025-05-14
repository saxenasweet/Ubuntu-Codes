#include<stdio.h>
void main(void)
{
int func(int);
int N;
scanf("%d",&N);
int dummy;
dummy=func(N);
}
int func(int x)
{
int t=0;
if(x<0)
 return x;
else
{
 printf("%d\n",x);
 t+=func(x-1);
}
return t;
}

