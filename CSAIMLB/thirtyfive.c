/*
    *
   ***
  *****
 *******
*********
*/
#include<stdio.h>
void main(void)
{
int i,j,N,b,k;
scanf("%d",&N);
b=N-1;
for(i=1;i<=(N*2)-1;i=i+2)
{
for(k=1;k<=b;k++)
 printf(" ");
b--;
for(j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
}
}
