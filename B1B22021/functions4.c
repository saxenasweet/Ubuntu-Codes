#include<stdio.h>
void main(void)
{
void func(void);
func();
func();
}
void func(void)
{
auto int i=0; //auto is a storage class specifier, it is optional
i++; //auto does not preserve the value of a variable after leaving the function
printf("%d\n",i);
}

