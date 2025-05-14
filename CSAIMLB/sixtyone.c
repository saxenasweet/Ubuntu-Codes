#include<stdio.h>
void main(void)
{
int a[10][10],b[10][10],z[10][10];
int r,c;
int i,j,k;
scanf("%d %d",&r,&c);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("Enter a[%d][%d]?",i,j);
scanf("%d",&a[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("Enter b[%d][%d]?",i,j);
scanf("%d",&b[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
z[i][j]=0;
for(k=0;k<c;k++)
z[i][j]+=a[i][k]*b[k][j];
}
}
printf("Matrix Muliplication Result is :\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
printf("%d\t",z[i][j]);
printf("\n");
}

}

