#include<stdio.h>
void main(void)
{
int i,n,d,sum=0;
printf("Armstong numbers between 100 and 500 are : \n");
for(i=100;i<=500;i=i+1)
{//Sum the cube of digits of i
n=i;
while(n>0)
{
d=n%10;
sum=sum+(d*d*d);
n=n/10;
}
if(sum==i)
 printf("%d ",i);
sum=0;
}
}
