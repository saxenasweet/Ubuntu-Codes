#include<stdio.h>
void main(void)
{
int i=1,n;
scanf("%d",&n);
x: //Label
printf("%dX%d=%d\n",n,i,n*i);
i=i+1;
if(i<=10) goto x;
}

