//Write a function to calculate factorial of a number
#include<stdio.h>
void main(void)
{
void factorial(int x); //Function declaration
int n;
printf("Enter a number whose factorial you want?");
scanf("%d",&n);
factorial(n); //Calling the function by passing the value of n
}
void factorial(int x) //Function definition
{
int a=1;
int f=1;
for(a=1;a<=x;a++)
{
f=f*a;
}
printf("Factorial of %d is %d\n",x,f);
}
