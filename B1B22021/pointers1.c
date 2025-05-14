#include<stdio.h>
void main(void)
{
int i=2,*p; //p is a pointer variable of the type int
printf("%x\n",&i); //Address where 2 is stored is printed
p=&i;
printf("%d\n",*p); //*p is value that p points to
}
//Pointer is a variable that stores the address of other variables of the
//same data type
