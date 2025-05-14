#include<stdio.h>
void main(void)
{//Prime numbers from 1 to 300
int n;
int i,fact=0,t;
printf("The prime numbers from 1 to 300 are:\n");
for(n=1;n<=300;n=n+1)
{
i=n;
for(t=1;t<=i;t=t+1)
{
if(i%t==0)
 fact=fact+1;
}
if(fact==2)
 printf("%d ",n);
fact=0;
}
}
