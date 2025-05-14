#include<stdio.h>
void main(void)
{
int ROW,COL,i,j;
scanf("%d %d",&ROW,&COL);
for(i=1;i<=ROW;i++)
{
for(j=1;j<=COL;j++)
 printf("*");
printf("\n");
}
}
