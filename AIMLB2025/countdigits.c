#include<stdio.h>
void main(void)
{
int n=123;
float d;//d=n/10.0 Implicit type casting
d=(float)n/10; //Explicit type casting
printf("%f\n",d);
}

