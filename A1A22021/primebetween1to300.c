#include<stdio.h>
void main(void)
{
int n,loop,remainder,count=0;
for(n=1;n<=300;n=n+1)
{
for(loop=1;loop<=n;loop=loop+1)
{
remainder=n%loop;
if(remainder==0)
 count=count+1;
}
if((count==2)||(n==1))
 printf("%d ",n);
count=0;
}
}

