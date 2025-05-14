#include<stdio.h>
void main(void)
{
int a[10][10],r,c,b[10][10],d[10][10];
int l,m;
scanf("%d %d",&r,&c);
for(l=0;l<r;l++)
{
for(m=0;m<c;m++)
{
printf("Enter value of a[%d][%d]?",l,m);
scanf("%d",&a[l][m]);
printf("Enter value of b[%d][%d]?",l,m);
scanf("%d",&b[l][m]);
d[l][m]=a[l][m]+b[l][m];
}
}
for(l=0;l<r;l++)
{
for(m=0;m<c;m++)
{
printf("%d\t",d[l][m]);
}
printf("\n");
}
}

a[0][0]		a[0][1]
a[1][0]		a[1][1]
