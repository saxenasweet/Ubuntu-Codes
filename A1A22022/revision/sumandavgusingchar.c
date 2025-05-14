#include<stdio.h>
void main(void)
{
char choice='Y',d;
int number,sum=0,total=0;
float avg;
while (choice != 'N')
{
printf("Enter a number?");
scanf("%d",&number);
sum=sum+number;
total=total+1;
scanf("%c",&d); //Take the enter key \n in d 
printf("Do you want to enter another number?");
scanf("%c",&choice);
}
avg=sum/total;
printf("Sum=%d and Average=%f",sum,avg);
}

