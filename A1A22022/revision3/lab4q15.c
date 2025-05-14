#include<stdio.h>
void main(void)
{
int sumofodddigits(int x);
int n;
int result;
scanf("%d",&n);
result=sumofodddigits(n);
printf("The sum of odd digits =%d\n",result);
}
int sumofodddigits(int x)
{
int digit;
int remainder;
int sum=0;
while(x>0)
{
digit=x%10;
remainder=digit%2;
if(remainder==1)
  sum=sum+digit;
x=x/10;
}
return sum;
}
