//A program to simulate a calculator using switch case
/*
Input a number? 
5
Input another number?
6
Choose one option:
1-Add
2-Subtract
3-Multiply
4-Divide
What is your option?1
Answer is 11
*/
#include<stdio.h>
#include<stdlib.h>
void main(void)
{
float a,b,c;
int o;
printf("Input a number?");
scanf("%f",&a);
printf("Input another number?");
scanf("%f",&b);
printf("Choose one option:");
printf("\n1-Add");
printf("\n2-Subtract");
printf("\n3-Multiply");
printf("\n4-Divide");
printf("\nWhat is your option?");
scanf("%d",&o);
switch(o)
{
case 1:
c=a+b;
break;
case 2:
c=a-b;
break;
case 3:
c=a*b;
break;
case 4:
c=a/b;
default:
printf("\nInvalid choice");
exit(0); //exit is function which ends the code abruptly
}
printf("\nAnswer is %f :",c);
printf("\n");
}
