//Factors of a number - all those numbers that completely divide that number
//Factors of 6 -> 1,2,3,6
#include<stdio.h>
void main(void)
{
int i=1;
int n;
int r;
scanf("%d",&n);
c:
r=n%i;
if(r==0)
 printf("%d\n",i);
i=i+1;
if(i<=n)
 goto c;
}

