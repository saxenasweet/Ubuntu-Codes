#include<stdio.h>
void main(void)
{
int a[10][10],b[10][10],c[10][10];
int i,j;
int m,n;
scanf("%d %d",&m,&n);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
scanf("%d",&b[i][j]);
c[i][j]=a[i][j]+b[i][j];
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",c[i][j]);
}
printf("\n");
}
printf("\n");
}
