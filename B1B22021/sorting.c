#include<stdio.h>
void main(void)
{
int a[5];
int i,j;
int c;
int temp;
for(c=0;c<5;c++)
scanf("%d",&a[c]);
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("The sorted array is:");
for(c=0;c<5;c++)
 printf("%d ",a[c]);
}
