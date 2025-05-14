#include<stdio.h>
void main(void)
{
void swap(int *z,int *y);
int a=32;
int b=23;
swap(&a,&b); //call swap  by passing the addresses of memory where 32 and 23 are stored
//Call by reference
printf("The value of a is %d and b is %d\n",a,b);
}
void swap(int *z,int *y)
{
int temp;
temp=*z;
*z=*y;
*y=temp;
}
//Write a code to interchange two variables by using pointers
