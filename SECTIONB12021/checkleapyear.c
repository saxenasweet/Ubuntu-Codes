//A year is a leap year if it is divisible by either 4 or 400.
//Single line comment
/*
This is a multi line comment
This code was written on 22 April 2021
*/
#include<stdio.h>
void main(void)
{
int year;
int remainder4;
int remainder100;
int remainder400;
scanf("%d",&year);
remainder4=year%4;
remainder100=year%100;
remainder400=year%400;
if(((remainder4==0)&&(remainder100!=0))||((remainder100==0)&&(remainder400==0)))
 printf("Year is a leap year");
else
 printf("Year is not a leap year");
}

