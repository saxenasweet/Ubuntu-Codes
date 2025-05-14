//Write a code which asks the user to enter n numbers and calculates the sum and average of n numbers
#include<stdio.h>
void main(void)
{
int n;
int loop=1;
int num;
int sum=0;
float avg;
printf("\nEnter how many numbers you want to enter?");
scanf("%d",&n);
while(loop<=n)
{
printf("\nEnter a number?");
scanf("%d",&num);
sum=sum+num;
loop=loop+1;
}
avg=(float)sum/n; //Explicit  type casting 
printf("\nAverage=%f and Sum=%d\n",avg,sum);
}

