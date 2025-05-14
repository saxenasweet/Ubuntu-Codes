#include<stdio.h>
void main(void)
{
int a[10],i,j,temp; //Sorting in Ascending Order
printf("Enter 10 numbers...\n");
for(i=0;i<10;i++)
 scanf("%d",&a[i]);
for(i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
{
if(a[i]>a[j]) //Swap
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("Printing the sorted list...\n");
for(i=0;i<10;i++)
printf("%d ",a[i]);
}

