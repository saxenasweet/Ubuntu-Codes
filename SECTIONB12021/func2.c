//Write a function to add two numbers
#include<stdio.h>
void main(void)
{
int sum(int x,int y);//Function declaration
int a,b;
int c;
printf("Enter two numbers?");
scanf("%d %d",&a,&b);
c=sum(a,b); //Calling the function sum by passing the values of a and b
printf("The sum of %d and %d is %d\n",a,b,c);
}
int sum(int x,int y) //Function definition
{
int z;
z=x+y;
return z;
}

