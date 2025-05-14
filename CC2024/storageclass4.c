#include<stdio.h>
void main(void)
{
int x;
int fact(int f);
scanf("%d",&x);
printf("%d\n",fact(x));
}
int fact(int f)
{
register int r=1;
int i;
for(i=1;i<=f;i++)
 r=r*i;
return r;
}

