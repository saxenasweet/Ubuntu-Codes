#include<stdio.h>
void main(void)
{
struct date
{
int dd;
int mm;
int yyyy;
}d1,d2;//Total memory taken by this structure is 24 bytes
printf("Enter first date?");
scanf("%d %d %d",&d1.dd,&d1.mm,&d1.yyyy);
printf("Enter second date?");
scanf("%d %d %d",&d2.dd,&d2.mm,&d2.yyyy);
if((d1.dd==d2.dd)&&(d1.mm==d2.mm)&&(d1.yyyy==d2.yyyy))
 printf("Dates are same\n");
else
 printf("Dates are not same\n");
}

