#include<stdio.h>
void main(void)
{
int i,n,r,tf=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
r=n%i;
if(r==0)
 tf++;
}
if(tf==2)
 printf("%d is prime\n",n);
else
 printf("%d is composite\n",n);
}

