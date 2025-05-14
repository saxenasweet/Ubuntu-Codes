//Storage Class Specifiers:
//static
//auto
//extern
//register
#include<stdio.h>
void main(void)
{
auto int a=6; // By default all variables are of the storage class sprcifier type auto
void print(int x);
printf("%d",a);
print(a); //Calling the function by passing the value -> Call by value
print(a);
}
void print(int x)
{
static int g=3;
printf("\nIn function print value of x and g are %d and %d\n",x,g);
x++;
g++;
}
