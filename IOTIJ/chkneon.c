#include<stdio.h>
void main(void)
{
int num;
int sqr;
int temp=0;
printf("Enter a number you wish to check if it is a neon number?");
scanf("%d",&num);
sqr=num*num;
while(sqr>0)
{
temp+=(sqr%10);
sqr/=10;
}
if(temp==num)
 printf("Number is a Neon Number\n");
else
 printf("Number is not a Neon Number\n");
}

