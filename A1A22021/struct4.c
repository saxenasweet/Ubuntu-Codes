#include<stdio.h>
int main(void)
{
struct date
{
int da;
int month;
int year;
}date1,date2;
scanf("%d %d %d",&date1.da,&date1.month,&date1.year);
scanf("%d %d %d",&date2.da,&date2.month,&date2.year);
if((date1.da==date2.da)&&(date1.month==date2.month)&&(date1.year==date2.year))
 printf("Dates are same");
else
 printf("Dates are different");
printf("Memory taken is %ld\n",sizeof(struct date));
}

