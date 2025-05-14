#include<stdio.h>
void main(void)
{//Sum of series 1!+2!+3!+...+n!
int n;
int i,t,fact=1,sum=0;
printf("Enter the value of n?");
scanf("%d",&n);
for(i=1;i<=n;i=i+1)
{
printf("%d!",i);
if(i!=n)
 printf("+");
for(t=1;t<=i;t=t+1)
{
fact=fact*t;
}
sum=sum+fact;
fact=1;
}
printf("\n");
printf("Sum of series is %d\n",sum);
}

