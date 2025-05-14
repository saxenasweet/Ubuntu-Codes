#include<stdio.h>
void main(void)
{
void func(void);
func();
func();
}
void func(void)
{
static int i=0; //static is a keyword , it is a storage class specifier
i++; //static preserves the value of a valriable even after leaving a function
printf("%d\n",i);
}

