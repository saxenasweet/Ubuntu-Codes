#include<stdio.h>
void main(void)
{
void func(void);
func(); //first time function is called
func(); //second time function is called
}
void func(void)
{
static int i=1; //the value of i persists even after leaving the function
printf("%d\n",i);
i++;
}
//Storage Class Specifier -static 
//Syntax:
//static <data type> variable_name<=initial_value>
/*
Output
1
2
*/
