#include<stdio.h>
void main(void)
{
void swap(int *p,int *q);
int a=3;
int b=6;
swap(&a,&b);
printf("Swapped Values are %d and %d\n",a,b);
}
void swap(int *p,int *q)
{
int t;
t=(*p);
(*p)=(*q);
(*q)=t;
}

