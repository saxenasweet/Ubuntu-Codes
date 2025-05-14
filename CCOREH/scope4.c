#include<stdio.h>
//int i=5;
void main(void)
{
void func(void);
func();
func();
func();
}
void func(void)
{
static int i=5;
printf("%d\n",i);
i++;
}
