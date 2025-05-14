#include<stdio.h>
void main(void)
{
int i=6;
int *p; //p is a pointer which will store the address of an integer
//variable
printf("%x",&i); //&i means address of i i.e. memory address where 
p=&i; //p stores the address where 6 is stored
printf("%d\n",*p); //Prints the value which p points to i.e. 6
}
