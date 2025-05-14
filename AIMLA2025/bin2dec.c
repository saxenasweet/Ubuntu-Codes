#include<stdio.h>
#include<math.h>
void main(void)
{
int bin,dec=0,temp,power=0;
printf("Enter a binary number?");
scanf("%d",&bin);
temp=bin;
while(temp>0)
{
dec+=(pow(2,power))*(temp%10);
temp/=10;
power++;
}
printf("The decimal equivalent of %d is %d\n",bin,dec);
}
