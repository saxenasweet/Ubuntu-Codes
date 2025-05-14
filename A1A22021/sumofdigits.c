//Write a code to print the sum of digits of a 3 digit number entered by the user
//E.g.  Input : 123
//Output:6
#include<stdio.h>
void main(void)
{
int a,t;
int d1,d2,d3;
int sum;
printf("Enter the number?");
scanf("%d",&a);
t=a;
d1=a%10;
a=a/10;
d2=a%10;
a=a/10;
d3=a%10;
sum=d1+d2+d3;
printf("Sum of digits of %d is %d\n",t,sum);
}

