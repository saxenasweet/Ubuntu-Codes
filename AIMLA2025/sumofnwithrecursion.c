#include<stdio.h>
void main(void)
{
int sum(int);
int n;
scanf("%d",&n);
printf("The sum of %d natural numbers is %d\n",n,sum(n));
}
int sum(int x)
{
int g=0;
if(x==1)
 return 1;
else
g=x+sum(x-1);
return g;
}

