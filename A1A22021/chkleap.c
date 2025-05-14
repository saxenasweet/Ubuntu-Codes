#include<stdio.h>
void main(void)
{
int year;
int div4,div100,div400;
scanf("%d",&year);
div4=year%4;
div100=year%100;
div400=year%400;
if(((div4==0)&&(div100!=0))||(div400==0))
 printf("Leap Year");
else
 printf("Not a leap year");
}

