#include<stdio.h>
void main(void)
{
int a,b,c;
a=4;
b=6;
c=a+b;//+ is an arithmatic operator, a and b are operands.
//Arithmatic Operators -> + -  / * %
//Logical Operators ->  > < >= <= != ==
//Boolean Operators -> &&-> AND ||-> OR !-> NOT
//Operators -> 3 Types : Unary, Binary and Ternary
//Binary Operators are those which have 2 operands: e.g. a+b , a-b , a*b , a/b , a%b
//Unary Operators are those which have 1 operand : e.g. ++ , --  , + , -
//Ternary Operator -> ?: There are 3 operands
//Shorthand Operators  c+=2 c-=2 c*=b c/=d c%=f
//Bit-wise Operators -> 6  These operators work at bit level
c=-a; //a=4
a=(-a);//a=-4
printf("%d",c); //c=-4
c=a++; // post increment operator c=-4, a=-3
printf("\n%d",c);//-4
c=++a;// pre increment operator a=-2, c=-2
printf("\n%d",c); //-2
c=a--; //post decrement operator c=-2, a=-3
printf("\n%d",c); //-2
c=--a;// pre decrement operator  a=-4 c=-4
printf("\n%d",c);//-4
}


