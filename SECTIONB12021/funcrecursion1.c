//Recursion -> a technique where a function is called again and again till a limiting condition is met
//Operating System reserves a region of memory called STACKS where funtions are managed.
#include<stdio.h>
void main(void)
{
void func(void);
func();
}
void func(void)
{
printf("Hello\n");
func();
}

