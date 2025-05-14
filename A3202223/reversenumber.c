#include<stdio.h>
void main(void)
{
int n,r,revno=0;
scanf("%d",&n);
while(n>0)
{
r=n%10;
//printf("%d",r);
revno=(revno*10)+r;
n=n/10;
}
printf("%d\n",revno);
}
