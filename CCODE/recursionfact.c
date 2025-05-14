#include<stdio.h>
void main(void)
{
int fact(int n);
int f;
scanf("%d",&f);
printf("%d\n",fact(f));
}
int fact(int n)
{
if (n==1)
 return 1;
else
 return n*fact(n-1);
}

