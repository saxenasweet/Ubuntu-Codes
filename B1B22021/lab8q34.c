#include<stdio.h>
void main(void)
{
int loop;
struct datechk
{
int dd;
int mm;
int yyyy;
}dates[2];
for(loop=0;loop<2;loop++)
{
printf("Enter a date?");
scanf("%d %d %d",&dates[loop].dd,&dates[loop].mm,&dates[loop].yyyy);
}
if((dates[0].dd==dates[1].dd)&&(dates[0].mm==dates[1].mm)&&(dates[0].yyyy==dates[1].yyyy))
 printf("Dates are same\n");
else
 printf("Dates are different\n");
}
