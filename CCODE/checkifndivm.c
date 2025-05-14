//6-N, M-2 - is 6 completely divisible by 2 ? Yes
#include<stdio.h>
void main(void)
{
int n,m,r;
scanf("%d %d",&n,&m);
r=n%m;
if(r==0)
 printf("\nPassed divisibility test");
else
 printf("\nFailed Divisibility test");
}

