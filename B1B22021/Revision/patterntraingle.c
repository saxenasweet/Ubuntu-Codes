/*
*
**
***
****
*****
*/
#include<stdio.h>
void main(void)
{
int i,j,n;
scanf("%d",&n);
for(i=1;i<=n;i=i+1)
{
for(j=1;j<=i;j=j+1)
{
printf("*");
}
printf("\n");
}
}

