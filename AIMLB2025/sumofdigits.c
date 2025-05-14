#include<stdio.h>
void main(void)
{
int i,d=0,temp;
scanf("%d",&i);
if(i<0)
  temp=i*-1;
temp=i;
while(temp>0)
{
d++;
temp/=10;
}
printf("The number of digits in %d are %d\n",i,d);
}
