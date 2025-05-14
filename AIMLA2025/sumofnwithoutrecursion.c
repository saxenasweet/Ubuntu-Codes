#include<stdio.h>
void main(void)
{
int n,sum=0,i;
scanf("%d",&n);
for(i=1;i<=n;i++)
 sum+=i;
printf("The sumof first %d natural numbers is %d\n",n,sum);
}

