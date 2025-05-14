#include<stdio.h>
void main(void)
{
int cd(int n);
int n;
scanf("%d",&n);
printf("The total number of digits in %d are %d\n",n,cd(n));
}
int cd(int n)
{
int nd=0;
while(n>0)
{
nd++;
n=n/10;
}
return nd;
}

