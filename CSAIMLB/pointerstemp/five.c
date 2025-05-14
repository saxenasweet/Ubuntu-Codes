#include<stdio.h>
//Pointer Arithmetic
void main(void)
{
int a[5]={1,2,3,4,5};
int *p;
p=&a[0]; //Storing the address of the first element of the array in p
printf("%d\n",*p); //1 will be printed
p++; /Forwarding a pointer
printf("%d\n",*p); //2 will be printed
p+=2;
printf("%d\n",*p); //4 will be printed
p+=3;
printf("%d\n",*p); //Garbage value will be printed
p-=3; /Rewinding a pointer
printf("%d\n",*p); //4 will be printed
//Only two arithmetic operations are possible with pointers
//Addition and Subtraction
}

