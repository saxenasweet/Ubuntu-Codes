#include<stdio.h>
void main(void)
{
void func(void);
func();
func();
func();
}
void func(void)
{
auto int a=1;
printf("%d\n",a);
a++;
}

