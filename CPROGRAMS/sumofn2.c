#include<stdio.h>
void main(void)
{
int i=1,N,sum=0;
printf("\nEnter the limit?");
scanf("%d",&N);
while(i<=N)
{
printf("\n%d",i);
sum=sum+i;
i=i+1;
}
printf("\nSum of number is %d\n",sum);
}
