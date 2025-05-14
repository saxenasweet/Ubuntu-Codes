//Bubble Sort
#include<stdio.h>
void main(void)
{
int arr[5];
int i,j,temp;
for(i=0;i<5;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
printf("The sorted list is :-");
for(i=0;i<5;i++)
 printf("%d ",arr[i]);
}
