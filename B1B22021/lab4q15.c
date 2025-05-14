#include<stdio.h>
void main(void)
{
int sumofodddigits(int n);
int a;
scanf("%d",&a);
printf("\nThe sum of odd digits of %d is %d\n",a,sumofodddigits(a));
}
int sumofodddigits(int n)
{
int r,sum=0;
while(n>0)
{
r=n%10;
if(r%2!=0)
{
sum=sum+r;
}
n=n/10;
}
return sum;
}

