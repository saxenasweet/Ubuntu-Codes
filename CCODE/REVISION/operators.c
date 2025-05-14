/*
+ - * / %  - Arithmatic Operators
,
=
;
Logical Operators  > < >= <= != ==
Boolean Operators && || !
Bit-wise Operators & AND | OR ~ NOT <<  LEFT SHIFT >>  RIGHT SHIFT ^ XOR These operators work at bit level
Opertors are of type -> Unary, Binary  and Ternary
a=b+c -> b and c are operands -> Binary Operators: 2 Operands 
a=7
+a
-a
Unary Operator - > One operand Increment and Decrement Operators ++ --
*/
#include<stdio.h>
void main(void)
{
int a,b;
a=7;
b=a++; //post increment
printf("b=%d\n",b);
printf("a=%d\n",a);
b=++a; //pre increment
printf("b=%d\n",b);
printf("a=%d\n",a);
b=a--; //post decrement
printf("b=%d a=%d\n",b,a);
b=--a; //pre decrement
printf("b=%d a=%d\n",b,a);
}
