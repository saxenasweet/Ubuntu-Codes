//Ask the user  to enter 10 numbers, print the sum and average of 10 numbers
#include<stdio.h>
void main(void)
{
//Array is a collection of similar data type elements 
//Array is a collection of homogeneous data type elements
//Array of 10 integers  int a[10] ->a is an array of 10 integers
int num[10];
int l;
int sum=0;
float avg;
for(l=0;l<10;l=l+1)
{
printf("Enter num[%d]?",l);
scanf("%d",&num[l]);
sum=sum+num[l];
}
avg=sum/10.0; //Implicit data type casting
//avg=(float)sum/10; //Explicit data type casting
printf("Sum=%d and Average=%f\n",sum,avg);
}
