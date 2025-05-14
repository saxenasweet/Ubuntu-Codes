#include<stdio.h>
void main(void)
{
int number;
int n=0;
int sum=0;
float avg;
do
{
scanf("%d",&number);
sum=sum+number;
n++;
}while(number!=0);
n--;
printf("Total numbers you have entered are:%d\n",n);
avg=(sum*1.0)/n;
printf("Sum=%d and Average=%f\n",sum,avg);
}
