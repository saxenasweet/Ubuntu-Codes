#include<stdio.h>
void main(void)
{
int area(int x,int y);
int l;
int b;
int result;
scanf("%d %d",&l,&b);
result=area(l,b);
printf("%d\n",result);
}
int area(int x,int y)
{
return x*y;
}

