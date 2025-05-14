#include<stdio.h>
void main(void)
{
int age;
scanf("%d",&age);
if((age>0)&&(age<=100))
{
if(age>=18)
 printf("Eligible to Vote\n");
else
 printf("Too young to Vote\n");
}
else
 printf("Incorrect Input...\n");
}

