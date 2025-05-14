#include<stdio.h>
void main(void)
{
int num1,num2;
printf("\nEnter a number?");
scanf("%d",&num1);
printf("\nEnter another number?");
scanf("%d",&num2);
if(num1>num2)
 printf("\n%d is greatest",num1);
else if (num2 > num1)
 printf("\n%d is greatest",num2);
else
 printf("\nBoth numbers are same...");
}
