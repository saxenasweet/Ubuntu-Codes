//Input:123
//Output:321
//Write a code to reverse the digits of a number
#include<stdio.h>
void main(void)
{
int a,b;
scanf("%d",&a);
printf("\nThe number in reverse is:\n");
while(a>0)
{
b=a%10;
printf("%d",b);
a=a/10;
}
printf("\n");
}

