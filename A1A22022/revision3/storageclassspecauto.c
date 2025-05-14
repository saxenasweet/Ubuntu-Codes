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
int i=1;
printf("%d\n",i);
i++;
}
