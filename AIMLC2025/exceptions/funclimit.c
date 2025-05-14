#include<stdio.h>
void main(void)
{
void func(void);
func();
}
void func(void)
{
printf("In func\n");
func();
}

