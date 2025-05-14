#include<stdio.h>
void main(void)
{
void func(void);
extern int a;
printf("In main a is %d\n",a);
a++;
func();
}
void func(void)
{
extern int a; //Scope of a is outside the block somewhere
printf("\nIn func a is %d",a);
}
int a=2; //a is defined here and is a global variable

