#include<stdio.h>
#include<stdlib.h>
void main(void)
{
int age;
printf("Enter your age?");
scanf("%d",&age);
if(age<1)
{
printf("Invalid input\n");
exit(0);
}
if(age<18)
 printf("You cannot vote\n");
else if(age==18)
 printf("Congratulations!You should vote...\n");
else
 printf("You must vote\n");
}

