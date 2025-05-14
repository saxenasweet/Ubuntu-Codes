#include<stdio.h>
void main(void)
{
int n;
int cd=0;
scanf("%d",&n);
while(n>0)
{
cd++;
n=n/10;
}
printf("%d\n",cd);
}

