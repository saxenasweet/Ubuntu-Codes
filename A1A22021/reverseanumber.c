//Write a code to reverse a number
//Input:
//123
//Output:
//321
//123=(3*10^0)+(2*10^1)+(1*10^2)
//321=(3*10^2)+(2*10^1)+(1*10^0)
#include<stdio.h>
void main(void)
{
int num,d,sum=0;
printf("Enter a number?");
scanf("%d",&num);
while(num>0)
{
d=num%10; //Extract the right most digit
sum=(sum*10)+d;
num=num/10; //Removing the right most digit
}
printf("Number reversed is %d\n",sum);
}
