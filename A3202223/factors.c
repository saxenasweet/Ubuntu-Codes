#include<stdio.h>
void main(void)
{
int i,n,r;
scanf("%d",&n);
printf("Factors are:\n");
for(i=1;i<=n;i++)
{
r=n%i;
if(r==0)
 printf("%d\n",i);
}
}

