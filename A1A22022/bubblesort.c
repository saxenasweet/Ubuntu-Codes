#include<stdio.h>
void main(void)
{
int a[10];
int i,j,t;
printf("Enter 10 numbers\n");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
for(j=9;j>=0;j--)
{
for(i=0;i<=j-1;i++)
{
if(a[i]>a[i+1])
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
}
}
}
printf("The sorted list is:");
for(i=0;i<=9;i++)
 printf("%d ",a[i]);
printf("\n");
}

