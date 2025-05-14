#include<stdio.h>
void main(void)
{
int areaofrect(int a,int b);
int l,b;
scanf("%d %d",&l,&b);
printf("The area of rectangle is %d\n",areaofrect(l,b));
}
int areaofrect(int a, int b)
{
return a*b;
}

