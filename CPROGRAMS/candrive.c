#include<stdio.h>
void main(void)
{
int age;
printf("\nEnter age?");
scanf("%d",&age);
if(age<16)
 printf("\nCannot drive");
else if ((age>=16)&&(age<18))
 printf("\nLearning License");
else if ((age>=18)&&(age<70))
 printf("\nDriving License can be issued");
else 
 printf("\nDriving License  can not be issued..");
}
