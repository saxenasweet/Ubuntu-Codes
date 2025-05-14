#include<stdio.h>
int x=3; //x is a Global variable 
//Scope and Life time of a global variable is throughout the program
void main(void)
{
void func(void);
printf("In main() x is %d\n",x);
x=x+1; //x=4
func();//function call
printf("In main() x is %d\n",x);
}
void func(void)
{
printf("In func() x is %d\n",x);
x++; //x=5
}

