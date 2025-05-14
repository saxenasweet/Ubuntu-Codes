#include<stdio.h>
void main(void)
{
void func(int *p);
int i=8;
printf("In main i is %d\n",i); //Prints 8
func(&i);
printf("Back in main i is %d\n",i); //Prints 9
}
void func(int *p)
{
printf("In func the value is %d\n",*p); //Prints 8
(*p)++; //Increase the value what p is pointing to by 1
}

