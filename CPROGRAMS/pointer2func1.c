#include<stdio.h>
void f1(void)
{
printf("Hi\n");
}
void main(void)
{
void (*f2)(void);
f2=&f1;
(*f2)();
}
