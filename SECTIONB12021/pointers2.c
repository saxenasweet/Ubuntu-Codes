#include<stdio.h>
void main(void)
{
void func(int *x);
int n=6;
func(&n); //Calling the function by passing the address of n i.e. where 6 is stored
printf("%d\n",n); //7
}
void func(int *x)
{
(*x)++; //x=7
}
//You can call a function in two ways - Call by value and Call by reference 
