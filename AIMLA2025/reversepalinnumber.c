#include<stdio.h>
void main(void)
{
int n,t,rev=0;
printf("Enter a number you want me to check if it is a palindrome number or not?");
scanf("%d",&n);
t=n;
while(t>0)
{
rev=(rev*10)+(t%10);
t/=10;
}
if(rev==n)
 printf("Palindrome number\n");
else
 printf("Not a Palindrome number\n");
}
