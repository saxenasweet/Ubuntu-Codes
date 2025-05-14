/*
Write a code which asks the user to enter numbers till the user enters 'N'. The code
should print the sum and average of numbers entered
*/
#include<stdio.h>
void main(void)
{
int n,sum=0,count=0;
float avg;
char ch;
char dummy;
do
{
printf("Enter a number?");
scanf("%d",&n);
sum=sum+n;
count=count+1;
printf("\nDo you want to enter another number (Y or N)?");
scanf("%c",&dummy);
scanf("%c",&ch);
}while(ch!='N');
printf("\nSum=%d",sum);
avg=(float)sum/count; //Type casting -int is casted to float
printf("\nAverage=%f",avg);
}

