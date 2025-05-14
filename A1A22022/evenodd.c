#include<stdio.h>
void main(void)
{
int a;
int r;
printf("Enter a number you want me to check for even or odd?");
scanf("%d",&a);
r=a%2;
if(r==0)
 printf("The number is Even\n");
else
 printf("The number is Odd\n");
}

