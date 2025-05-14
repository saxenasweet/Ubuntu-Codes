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
static int n=0;
n++;
printf("%d\n",n);
}
