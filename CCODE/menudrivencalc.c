/*
switch case
Both are keywords (reserved Words with a special meaning) - C has around 32 keywords
switch case is Used for menu-driven programs
*/

//Write a code to simulate a calculator
//User will enter 2 numbers, and depending on choice (1-Add,2-Substract,3-Multiply,4-Divide), the result should be displayed
 
#include<stdio.h>
void main(void)
{
float n1,n2;
float result;
int choice;
scanf("%f %f",&n1,&n2);
printf("\nEnter your choice(1-add,2-subtract,3-multiply,4-divide");
scanf("%d",&choice);
switch(choice)
{
case 1:
result=n1+n2;
break;
case 2:
result=n1-n2;
break;
case 3:
result=n1*n2;
break;
case 4:
result=n1/n2;
break;
default: //Neither of the valid choice values
printf("\nYou entered a wrong choice");
}
if((choice>=1)&&(choice<=4))
printf("\nAnswer is %f\n",result);
}

