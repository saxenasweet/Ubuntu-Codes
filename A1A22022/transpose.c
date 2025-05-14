#include<stdio.h>
void main(void)
{
int a[20][20];
int r,c,flag=0;
int t[20][20];
int i,j;
scanf("%d %d",&r,&c);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
 scanf("%d",&a[i][j]);
 t[j][i]=a[i][j];
}
}
printf("Printing the transpose of the matrix\n");
for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
 printf("%d ",t[i][j]);
printf("\n");
}
printf("\n");
if(i!=j)
 printf("\nThe matrices are not symmetric");
else
{
for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
{
if(a[i][j]!=t[i][j])
 flag=1;
}
}
if(flag==1)
 printf("Matrices are not symmetric\n");
else
 printf("Matrices are symmetric\n");
}
}

