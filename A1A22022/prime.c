#include<stdio.h>
void main(void)
{
int i,n,r,c=0;
printf("Enter a number you want me to check for primality?");
scanf("%d",&n);
for(i=1;i<=n;i=i+1)
{
r=n%i;
if(r==0)
 c=c+1;
}
if(c==2)
 printf("%d is prime\n",n);
else
 printf("%d is composite\n",n);
}

