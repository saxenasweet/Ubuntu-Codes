#include<stdio.h>
void main(void)
{
int n,a,r,factors=0;
scanf("%d",&n);
for(a=1;a<=n;a=a+1)
{
r=n%a;
if(r==0)
 factors=factors+1;
}
if(factors==2)
 printf("\nNumber is prime");
else
 printf("\nNumber is composite");
}


