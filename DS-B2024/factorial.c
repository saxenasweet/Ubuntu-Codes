/*
f(3)=1*2*3
f(n)=1*2*3*4*...*(n-1)*(n)
*/
#include<stdio.h>
void main(void)
{
int f=1;
int n;
int loop;
scanf("%d",&n);
for(loop=1;loop<=n;loop=loop+1)
  f=f*loop;
printf("Factorial of %d is %d\n",n,f);
}

