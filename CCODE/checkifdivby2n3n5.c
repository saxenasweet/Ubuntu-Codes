//N - 9, M1-2,M2-3, M3=5
//Print N is completely divisible by which of M1,M2 , M3
#include<stdio.h>
void main(void)
{
int n,m1,m2,m3,r;
scanf("%d %d %d %d",&n,&m1,&m2,&m3);
r=n%m1;
if(r==0)
 printf("\nPassed Divisibility Test by %d",m1);
else
 printf("\nFailed Divisibility Test by %d",m1);
r=n%m2;
if(r==0)
 printf("\nPassed Divisibility Test by %d",m2);
else
 printf("\nFailed Divisibility Test by %d",m2);
r=n%m3;
if(r==0)
 printf("\nPassed Divisibility Test by %d",m3);
else
 printf("\nFailed Divisibility Test by %d",m3);
}
