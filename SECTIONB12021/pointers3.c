//Write a code to swap(interchange) two integers using a function
//a=2,b=3->swap->a=3,b=2
#include<stdio.h>
int a=2,b=3; //a and b are global variables
void main(void)
{
void swap(void);
printf("Before swapping a=%d and b=%d\n",a,b);
swap();
printf("After awapping a=%d and b=%d\n",a,b);
}
void swap(void)
{
int temp;
temp=a; //temp=2
a=b;//a=3
b=temp;//b=2
}

