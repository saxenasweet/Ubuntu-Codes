//Recursive functions are those which call themselves again and again till
//a limiting condition is met.
//But the example below is not a recursive function
//because func() is being called again and again.
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

