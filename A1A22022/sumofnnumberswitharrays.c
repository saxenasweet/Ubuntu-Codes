#include<stdio.h>
void main(void)
{
int a[50];
int N,i,sum=0;
float avg;
printf("Enter how many numbers you want to enter?");
scanf("%d",&N);
for(i=0;i<N;i=i+1)
{
printf("Enter a number?");
scanf("%d",&a[i]);
sum=sum+a[i];
}
avg=(float)sum/N;
printf("Sum=%d and Average=%f\n",sum,avg);
}

