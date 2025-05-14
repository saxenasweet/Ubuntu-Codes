#include<stdio.h>
void main(void)
{
int a,sq,temp=0;
printf("Enter a number you want me to check if it is a neon number?");
scanf("%d",&a);
sq=a*a;
while(sq>0)
{
temp+=(sq%10);
sq/=10;
}
if(temp==a)
printf("The number is a Neon Number..\n");
else
printf("The number is not a Neon Number...\n");
}

