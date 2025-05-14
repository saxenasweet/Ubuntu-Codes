#include<stdio.h>
void main(void)
{
int sumofdigits(int n);
int x;
scanf("%d",&x);
printf("%d\n",sumofdigits(x));
}
int sumofdigits(int n)
{
int sum=0;
int d;
if(n>0)
 return (n%10)+sumofdigits(n/10);
else
 return sum;
}
