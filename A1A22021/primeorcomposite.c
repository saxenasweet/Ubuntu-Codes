#include<stdio.h>
void main(void)
{
int n,loop,remainder,count=0;
printf("Enter a number who want to check for Primality?");
scanf("%d",&n);
for(loop=1;loop<=n;loop=loop+1)
{
remainder=n%loop;
if(remainder==0)
 count=count+1;
}
if(count==2)
 printf("Number is prime\n");
else
 printf("Number is composite\n");
}

