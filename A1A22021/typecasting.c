#include<stdio.h>
void main(void)
{
int a=4;
int c=6,d=5;
float b;
float f;
b=a; //Implicit Data Type Casting
printf("%f",b);
f=(float)c/d; //Explicit Data Type Casting
//f=(c*1.0)/d
printf("%f",f);
}

