#include<stdio.h>
void main(void)
{
int i=1,N,sum=0;
printf("\nEnter the limit?");
scanf("%d",&N);
x:
printf("\n%d",i);
sum=sum+i;
i=i+1;
if(i<=N)
 goto x;
printf("\nSum of numbers is %d \n",sum);
}
