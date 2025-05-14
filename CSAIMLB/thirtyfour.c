/*
*****
 ****
  ***
   **
    *
*/
#include<stdio.h>
void main(void)
{
int N,i,j,b=0,k;
scanf("%d",&N);
for(i=N;i>=1;i--)
{
for(k=1;k<=b;k++)
 printf(" ");
b++;
for(j=1;j<=i;j++)
 printf("*");
printf("\n");
}
}
