#include<stdio.h>
void main(void)
{
int i,sum=0,r,j;
for(i=100;i<=999;i++)
{
j=i;
while(j>0)
{
r=j%10; //r has the right most digit
sum=sum+(r*r*r);
j=j/10; //remove the right most digit
}
if(sum==i)
 printf("%d\n",i);
sum=0;
}
}

