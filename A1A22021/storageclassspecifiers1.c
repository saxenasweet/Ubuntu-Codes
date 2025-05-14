#include<stdio.h>
void main(void)
{
void func(void);
func();
func();
}
void func(void)
{
static int a=0;
printf("%d\n",a);
a++;
}

