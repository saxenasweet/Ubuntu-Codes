#include<stdio.h>
void main(void)
{
int a=3,*p; //*p is a pointer variable  i.e. p is an integer pointer
printf("%x",&a); //Tell me the memory address where 3 is stored
//Pointer is a variable that stores the address of other variable of the same type
p=&a; //p stores the address of a
printf("\np points to %d\n",*p); //*p is where p points to i.e. the value that p points to
}
