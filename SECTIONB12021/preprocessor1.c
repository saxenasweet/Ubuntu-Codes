//C pre processor is a program which transforms your code before compilation.
//It does it by using pre processor directives
//List of pre processor directives:
//#include, #define,#undef,#ifdef,#ifndef,#if,#else,#elif,#endif,...
#include<stdio.h>
#define PI 3.14 //Object like macro ->constants
#define SQUARE(x) x*x //Function like macro
#define CUBE(x) SQUARE(x)*x
#define GREATER(x,y) x>y?x:y //Ternary Operator
//Macro is a segment of code which is replaced by the value of the macro
void main(void)
{
printf("%f\n",PI);
printf("%d\n",SQUARE(3));
printf("%f\n",CUBE(2.4));
printf("Greatest value is %d\n",GREATER(3,2));
}
//Unary Operator - > -a
//Binary operator- > c=a+b 2 operands a and b and 1 operator +
//Ternary Operators -> 3 operands x>y?x:y -> if(x>y) x is greater else y is greater
//There are 2 pre processor directives in this code : #include, #define
