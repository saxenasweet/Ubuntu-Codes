#include<stdio.h>
void main(void)
{
int n,sq,sum=0;
printf("Enter a number you want me to check if it a neon number?");
scanf("%d",&n);
sq=n*n;
while(sq!=0)
{
sum+=(sq%10);
sq/=10;
}
if(sum==n)
 printf("The number is a neon number\n");
else
 printf("The number is not a neon number\n");
}
