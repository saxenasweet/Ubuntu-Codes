#include<stdio.h>
void main(void)
{
int n=1;
here:
n=n+1;
printf("%d\n",n);
if(n<=9) goto here;
}

