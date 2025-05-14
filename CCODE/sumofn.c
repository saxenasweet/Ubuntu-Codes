//The program prints the sum and average of integers till 0 is entered
#include<stdio.h>
void main(void)
{
int n;
int count=0;
int sum=0;
float avg;
Label:
count=count+1;
scanf("%d",&n);
sum=sum+n;
if(n!=0) goto Label;
count=count-1; //Because n+1 numbers are being entered
avg=(sum*1.0)/count; //Implicit type casting
printf("\nSum = %d and Average = %f and Count = %d\n",sum,avg,count);
}


