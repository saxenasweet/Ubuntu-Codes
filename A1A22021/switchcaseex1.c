/*
Write a menu driven program to simulate a calculator
*/
#include<stdlib.h>
#include<stdio.h>
void main(void)
{
float a,b,result;
int choice;
printf("Enter two numbers?");
scanf("%f %f",&a,&b);
printf("Enter your choice (1-Add,2-Subtract,3-Divide,4-Multiply)?");
scanf("%d",&choice);
switch(choice)
{
case 1:
result=a+b;
break;
case 2:
result=a-b;
break;
case 3:
result=a/b;
break;
case 4:
result=a*b;
break;
default:
printf("You entered a wrong choice!");
//exit(0); //exit is a function to end a program abruptly
}
printf("\nThe result is %f\n",result);
}

