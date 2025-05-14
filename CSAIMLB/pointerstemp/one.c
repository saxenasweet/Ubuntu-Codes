#include<stdio.h>
void main(void)
{
int a=6;
int *p; // p is  pointer of the type integer
printf("%x",&a);
p=&a; //p stores the address of 'a'
printf("\n%d",*p); //Prints 6
printf("\nThe address of pointer is %x\n",&p);
}

