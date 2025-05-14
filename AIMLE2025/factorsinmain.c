#include<stdio.h>
void main(void)
{
int n;
int l,m;
scanf("%d",&n);
for(l=1;l<=n;l++)
{
if(n%l==0)
  printf("%d\n",l);
}
}

