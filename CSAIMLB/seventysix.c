#include<stdio.h>
int a,b;
void main(void)
{
void swap(void);
scanf("%d %d",&a,&b);
swap(); //Function Call
printf("The swapped values are %d and %d",a,b);
}
void swap(void)
{
int t;
printf("Before SWAP :%d %d\n",a,b);
t=a;
a=b;
b=t;
printf("After SWAP :%d %d\n",a,b);
}
