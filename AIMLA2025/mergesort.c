#include<stdio.h>
void main(void)
{
int a[5],b[5],c[10];
int n,nn,nnn=0;
printf("Enter the first array in sorted order\n");
for(n=0;n<5;n++)
scanf("%d",&a[n]);
printf("Now enter the second array in sorted order\n");
for(nn=0;nn<5;nn++)
scanf("%d",&b[nn]);
n=0;
nn=0;
while(nnn<10)
{
if(a[n]<b[nn])
{
c[nnn]=a[n];
n++;
}
else if(a[n]>b[nn])
{
c[nnn]=b[nn];
nn++;
}
else
{
c[nnn]=a[n];
n++;
nn++;
}
nnn++;
}
for(nnn=0;nnn<10;nnn++)
printf("%d ",c[nnn]);
printf("\n");
}
