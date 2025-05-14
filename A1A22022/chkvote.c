#include<stdio.h>
xvoid main(void)
{
int year;
printf("Enter your age?");
scanf("%d",&year);
if(year<18)
 printf("You cannot vote\n");
else
 printf("You can vote\n");
}
