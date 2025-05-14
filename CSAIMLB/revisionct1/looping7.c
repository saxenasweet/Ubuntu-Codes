#include<stdio.h>
void main(void)
{
int d,sum=0,r;
scanf("%d",&d);
while(d>0)
{
r=d%10;
sum=(sum*10)+r;
d/=10;
}
printf("%d\n",sum);
}

