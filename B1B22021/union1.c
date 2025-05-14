#include<stdio.h>
void main(void)
{
union ex
{
int a;
float b;
}x;
x.a=3;
x.b=3.45;
printf("%f %d\n",x.b,x.a);
}

