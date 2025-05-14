//Compare two dates
#include<stdio.h>
void main(void)
{
struct date
{
int day;
int month;
int year;
}d1,d2;
printf("Enter a date in DD MM YYYY format?");
scanf("%d %d %d",&d1.day,&d1.month,&d1.year);
printf("Enter another date in DD MM YYYY format?");
scanf("%d %d %d",&d2.day,&d2.month,&d2.year);
if((d1.day==d2.day)&&(d1.month==d2.month)&&(d1.year==d2.year))
 printf("Two dates are same \n");
else
 printf("Two dates are different \n");
}

