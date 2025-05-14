/*
*****
*****
*****
*/
#include<stdio.h>
void main(void)
{
int l,b,i,j;
scanf("%d %d",&l,&b);
for(i=1;i<=b;i=i+1)
{
for(j=1;j<=l;j=j+1)
{
 printf("*");
}
printf("\n");
}
}
