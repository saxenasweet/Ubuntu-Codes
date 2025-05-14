#include<stdio.h>
void main(void)
{
int n;
printf("Enter a number you want me to check?");
scanf("%d",&n);
if(n>0)
 printf("Number is positive");
else if (n<0)
   printf("Number is negative");
else
   printf("Number is ZERO");
}

