#include<stdio.h>
void main(void)
{
int n,r,d,revnum=0;
printf("Enter a number?");
scanf("%d",&n);
printf("Printing the digits of the number:\n");
while(n>0)
{
d=n%10;
revnum=(revnum*10)+d;
n=n/10;
}
while(revnum>0)
{
d=revnum%10;
printf("%d\n",d);
revnum=revnum/10;
}
}
