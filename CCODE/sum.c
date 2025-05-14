/*
Code for adding 2 numbers
Written by K Saxena
*/
#include<stdio.h>
void main(void)
{
int a,b;  //int is a keyword and is used to declare 3 integer variables
float c;
a=9 ; // Data type conversion is automatically done - Implicit Data type conversion  //Keywords are reserved words with a special meaning.e.g. void , int  ->around 32 keywords in C
b=6; //Single line comments
c=(float)a/b; //Explicit Data type conversion is done by a developer . Modulus Operation does not work with float
printf("%d / %d = %.2f",a,b,c);
}
