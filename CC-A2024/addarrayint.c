#include<stdio.h>
void main(void)
{
int a[10],sum=0;
int i;
float avg;
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("Sum of 10 numbers entered by you is %d\n",sum);
avg=(float)sum/10;
printf("Average is %f\n",avg);
}

