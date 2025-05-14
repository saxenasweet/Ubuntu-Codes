//6-N, M-2 - is 6 completely divisible by 2 ? Yes
//Donot use % operator
#include<stdio.h>
void main(void)
{
int n,m,r,q;
scanf("%d %d",&n,&m);
q=n/m;
r=n-(q*m);
if(r==0)
 printf("\nPassed divisibility test");
else
 printf("\nFailed Divisibility test");
}

