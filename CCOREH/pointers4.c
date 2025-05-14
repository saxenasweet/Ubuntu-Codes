#include<stdio.h>
void main(void)
{
void swap(int *p,int *q);
int x,y;
scanf("%d %d",&x,&y);
swap(&x,&y); //Call by reference ->Calling a function by passing 
//addresses
printf("%d %d\n",x,y);
}
void swap(int *p,int *q)
{
int temp;
temp=*p;
*p=*q;
*q=temp;
}

