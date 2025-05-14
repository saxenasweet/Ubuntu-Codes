//A program to demonstrate operators in C
#include<stdio.h>
void main(void)
{
//Arithmatic Operators + - *  / %
//Logical Operators - && || !
//Boolean Operators - > < >= <= !=
//Increment and Decrement Operators  ++ --
//++ Increment Operator
//-- Decrement Operator
int a=3;
int b;
b=a++; //post increment
printf("b=%d a=%d\n",b,a);
//b=3 a=4
b=++a; //pre increment
printf("b=%d a=%d\n",b,a);
//b=5 a=5
b=a--; //post decrement
printf("b=%d a=%d\n",b,a);
//b=5 a=4
b=--a; //pre decrement
printf("b=%d a=%d\n",b,a);
//b=3 a=3
++a; //and a++ are same 
printf("a=%d\n",a);
--a; //and a-- are same
printf("a=%d\n",a);
}

