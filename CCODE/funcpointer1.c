#include<stdio.h>
void main(void)
{
int i,j;
int add(int,int);
int (*ip)(int,int);
int result;
scanf("%d %d",&i,&j);
ip=add;
result=(*ip)(i,j);
printf("%d",result);
}
int add(int x,int y)
{
return x+y;
}
