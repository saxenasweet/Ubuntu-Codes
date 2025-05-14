#include<stdio.h>
void main(void)
{
int a[10][10],m,n;
int r,c,t[10][10];
printf("Enter the order of matrix?");
scanf("%d %d",&m,&n);
for(r=0;r<m;r++)
{
for(c=0;c<n;c++)
{
printf("a[%d][%d]?",r,c);
scanf("%d",&a[r][c]);
t[c][r]=a[r][c];
}
}
printf("\nTranspose is:\n");
for(r=0;r<n;r++)
{
for(c=0;c<m;c++)
{
printf("%d ",t[r][c]);
}
printf("\n");
}
}

