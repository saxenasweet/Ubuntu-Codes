#include<stdio.h>
void main(void)
{
int a[10]; // Array of 10 integers
//Array is a collection of homogeneous data types values
//Write a program to calculate Sum and Average of 10 numbers entered by the user.
//a[0] -> First Number, a[1] -> Second Number , a[9]- Last Number
int  loop=0, sum=0; // Here sum is initialized to zero
float avg; //Uninitialized variables take a garbage value
for(;loop<10;loop++)
{
printf("\na[%d]?",loop);
scanf("%d",&a[loop]);
sum+=a[loop]; // sum=sum+a[loop]
}
avg=(float)sum/10;
printf("\nSum = %d and Average = %f\n",sum,avg);
}


