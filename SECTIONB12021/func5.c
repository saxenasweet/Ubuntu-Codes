#include<stdio.h>
void main(void)
{
void func(void);
int x=3;
printf("In main() x is %d\n",x);
x=x+1; //x=4
func(); //function called
printf("In main() x is %d\n",x);
func();
}
void func(void)
{
int x=8;
printf("In func() x is %d\n",x);
x++; //x=9
}
