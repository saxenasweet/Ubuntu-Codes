#include<stdio.h>
void main(void)
{
int a,b,c;
int sum(int x,int y);
a=3;
b=4;
c=sum(a,b);
printf("%d",c);
}
int sum(int x,int y)
{
return x+y;
}
