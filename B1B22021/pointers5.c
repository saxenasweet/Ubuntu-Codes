#include<stdio.h>
void main(void)
{
void swap(int *x, int *y);
int a=5;
int b=6;
int t;
swap(&a,&b);
printf("a=%d b=%d\n",a,b);
}
void swap(int *x,int *y)
{
int t;
t=*x;
*x=*y;
*y=t;
}

