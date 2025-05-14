#include<stdio.h>
void main(void)
{
int n,sum=0,N,total;
float avg;
printf("Enter how many numbers?");
scanf("%d",&N);
total=N;
while(N>0)
{
printf("Enter a number?");
scanf("%d",&n);
sum=sum+n;
N=N-1;
}
avg=(float)sum/total;
printf("Sum = %d Average=%f\n",sum,avg);
}

