#include<stdio.h>
void main(void)
{
int r,c;
int a[10][10],t[10][10];
int i,j;
scanf("%d %d",&r,&c);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("Enter a[%d][%d]?",i,j);
scanf("%d",&a[i][j]);
t[j][i]=a[i][j];
}
}
for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
printf("%d",t[i][j]);
printf("\n");
}
}

