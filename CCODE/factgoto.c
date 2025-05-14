//n!=1*2*3*4*5*...*(n-1)*n
//Factorial of n
#include<stdio.h>
void main(void)
{
int n;
int c=1;
int p=1;
scanf("%d",&n);
Label:
p=p*c;
c=c+1;
if(c<=n) goto Label;
printf("\nFactorial is %d\n",p);
}
