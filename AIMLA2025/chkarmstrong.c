#include<stdio.h>
int main(void)
{
int num,t,r;
int sum;
for(num=100;num<=999;num++)
{
t=num;
sum=0;
while(t>0)
{
r=t%10;
sum+=(r*r*r);
t/=10;
}
if(sum==num)
 printf("%d\n",num);
}
}

