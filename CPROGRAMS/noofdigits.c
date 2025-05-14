#include<stdio.h>
void main(void)
{
int n,d=0;
scanf("%d",&n);
while(n>0)
{
d=d+1;
n=n/10;
}
printf("\nNumber of digits are %d\n",d);
}
