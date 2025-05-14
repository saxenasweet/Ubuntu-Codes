/*
int a[10] ->1-D matrix
int a[3][5]  -> 2-D matrix, first element a[0][0], 2nd row, 4th column ->a[1][3]
int a[3][4][5] ->3-D matrix
*/
#include<stdio.h>
void main(void)
{
int a[10][10],b[10][10],c[10][10];
int m,n,o,p;
printf("Enter order for Matrix A?");
scanf("%d %d",&m,&n);
for(o=0;o<m;o++)
{
for(p=0;p<n;p++)
{
printf("Enter A[%d][%d]?",o,p);
scanf("%d",&a[o][p]);
printf("Enter B[%d][%d]?",o,p);
scanf("%d",&b[o][p]);
c[o][p]=a[o][p]+b[o][p];
}
}
printf("Result is :\n");
for(o=0;o<m;o++)
{
for(p=0;p<n;p++)
{
printf("%d ",c[o][p]);
}
printf("\n");
}
}
