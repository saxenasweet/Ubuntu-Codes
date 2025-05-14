//Pointer is a variable which stores the memory address of other variable of the same 
//data type.
#include<stdio.h>
void main(void)
{
int a=32;
char *b=NULL;
float *c=NULL;
int *p=NULL; //p is a integer pointer variable
//printf("Now p is %d\n",*p); //Will stop the program as NULL is not a valid memory address
printf("The address where 32 is stored is %x\n",&a);
p=&a; //&a is the memory address where 32 is stored
//b=&a;//b point to a but b is a char pointer and a is an int
//p will store the address where 32 is stored
//p will point to a
//therefore p is a pointer
printf("p points to %d\n",*p);//*p is the value that p points to
printf("The address assigned to p is %x\n",&p);
}
