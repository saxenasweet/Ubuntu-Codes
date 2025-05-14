#include<stdio.h>
void main(void)
{
int n,loop,remainder;
printf("Enter a number whose factors you want?");
scanf("%d",&n);
for(loop=1;loop<=n;loop=loop+1)
{
remainder=n%loop;
if(remainder==0)
 printf("%d\n",loop);
}
}

