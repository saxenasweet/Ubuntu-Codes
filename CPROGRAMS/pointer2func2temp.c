#include<stdio.h>
void f1(int a)
{
printf("%d\n",a);
}
void main(void)
{
void (*f2)(int);
f2=&f1;
(*f2)(10);
}
