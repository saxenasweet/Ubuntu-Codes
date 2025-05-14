#include<stdio.h>
#include<math.h>
void main(void)
{
int i=100;
int temp,sum=0;
while(i<1000)
{
temp=i;
while(temp>0)
{
sum+=pow((temp%10),3);
temp/=10;
}
if(sum==i)
 printf("%d\n",i);
sum=0;
i++;
}
}
