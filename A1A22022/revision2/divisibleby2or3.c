#include<stdio.h>
void main(void)
{
int a;
int r2;
int r3;
scanf("%d",&a);
r2=a%2;
r3=a%3;
if((r2==0)||(r3==0))
 printf("Number is divisible by 2 or 3\n");
else
 printf("Number is not divisible by 2 or 3\n");
}

