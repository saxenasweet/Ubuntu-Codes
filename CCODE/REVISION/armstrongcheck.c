#include<stdio.h>
void main(void)
{
int number;
int sum=0;
int digit;
int temp;
scanf("%d",&number);
temp=number;
while(temp>0)
{
digit=temp%10;
sum=sum+(digit*digit*digit);
temp=temp/10;
}
if(sum==number)
printf("Armstrong Nunmber");
else
printf("Not an Armstrong Number");
}
