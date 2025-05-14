#include<stdio.h>
void main(void)
{
int i=1;
int n;
int sum=0;
printf("Enter the limit?");
scanf("%d",&n);
while(i<=n)
{
sum=sum+i;
i=i+1;
}
printf("Sum of series is %d\n",sum);
}

