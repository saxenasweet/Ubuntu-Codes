#include<stdio.h>
void main (void)
{
int a=1;
int b;
b=a++;//++a pre increment operator;//a++ post increment operator; //a=a+1
printf("%d\n",b);
b=++a;
printf("%d\n",b);
}

/*
Operators

++ :increment operator
-- :decrement operator
+  :addition operator
-  :subtraction operator
*  :multiplication operator
/  :division operator
%  :modulus operator

a++ :a operand -> unary operators because there is only one operand
++a
a*b :a and b are operands ->binary operators because there are 2 operands
a>b?c:d ->ternary operator
*/
