//1!+2!+3!+....+n!
#include<stdio.h>
void main(void)
{
int n,fact=1,sum=0,i=1,j;
printf("\nEnter the range?");
scanf("%d",&n);
while(i<=n)
{
for(j=1;j<=i;j++)//Calculating factorial of i
{
fact=fact*j;
}
sum=sum+fact;
fact=1;
i=i+1;
}
printf("\nThe sum of series is %d\n",sum);
}

