#include<stdio.h>
void main(void)
{
int n;
int i;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 if(n%i==0)
{
  printf("%d\n",i);
}
}
}

