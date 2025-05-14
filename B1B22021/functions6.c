#include<stdio.h>
//int i=6; //i is a global variable, scope is the entire code
void main(void)
{
void func(void);
extern int i; //extern is a storage class specifier 
printf("In main :i is %d\n",i); //The compiler looks outside the block
i++;//for declaration of i
func();
}
int i=6;
void func(void)
{
printf("In func :i is %d\n",i);
}
//int i=6;
