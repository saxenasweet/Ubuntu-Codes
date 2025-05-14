#include<stdio.h>
void main(void)
{
int n,r,d,revnum=0;
printf("Enter a number?");
scanf("%d",&n);
printf("Printing the number in reverse order:");
while(n>0)
{
d=n%10;
revnum=(revnum*10)+d;
printf("\n%d",d);
n=n/10;
}
printf("\nThe reversed number is %d\n",revnum);
}

