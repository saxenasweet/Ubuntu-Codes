#include<stdio.h>
void main(void)
{
//Array is a collection of homogeneous data type elements
//int a1,a2,a3,a4,a5;
int a[5];//a[0]->first element & a[4]->last element 1-Dimensional Matrix
int loop;
int sum=0;
float avg;
for(loop=0;loop<5;loop++) //++ ->increment operator & -- ->decrement operator
{
scanf("%d",&a[loop]);
sum=sum+a[loop];
}
avg=(float)sum/5;
printf("Sum=%d and Average=%f\n",sum,avg);
}

