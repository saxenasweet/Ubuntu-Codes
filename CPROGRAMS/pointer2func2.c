#include<stdio.h>
void func1(int a)
{
int c=20;
c=c+a;
printf("%d\n",c);
}
void main(void)
{
void (*f2)(int);
f2=&func1;
(*f2)(10);
}
