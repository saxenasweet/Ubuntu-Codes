#include<stdio.h>
void main(void)
{
int n;
int fact(int x);
scanf("%d",&n);
printf("Factorial of %d is %d\n",n,fact(n));
}

int fact(int x)
{
int g,f=1;
for(g=1;g<=x;g++)
 f=f*g;
return f;
}

