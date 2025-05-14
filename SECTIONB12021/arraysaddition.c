//Addition of two arrays
//Matrices
//a[10] - 1 dimensional array
//a[4][4] - 2 dimensional array
//a[4][4][4] - 3 dimensional array
//Write a code to add two 2 -D matrices
#include<stdio.h>
void main(void)
{
int a[10][10],b[10][10],s[10][10];
//You can add two martices only if  there order is same
int m,n;
int r,c;
printf("Enter how many rows and columns ?");
scanf("%d %d",&r,&c);
for(m=0;m<r;m++)
{
for(n=0;n<c;n++)
{
printf("a[%d][%d]?",m,n);
scanf("%d",&a[m][n]);
printf("b[%d][%d]?",m,n);
scanf("%d",&b[m][n]);
s[m][n]=a[m][n]+b[m][n];
}
}
printf("Sum of two matrices is -\n");
for(m=0;m<r;m++)
{
for(n=0;n<c;n++)
{
printf("%d\t",s[m][n]);
}
printf("\n");
}
}

