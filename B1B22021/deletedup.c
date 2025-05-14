/*
Input:
a={1,2,1,2,3,4,1,2,1,4}
Output:
a={1,2,3,4}
*/
#include<stdio.h>
void main(void)
{
int a[]={1,2,1,2,3,4,1,2,1,4};
int n=10;
int i,o,j;
for(i=0;i<n;i++)
{
for(o=i+1;o<n;o++)
{
if(a[i]==a[o])
{
for(j=o;j<n;j++)
 a[j]=a[j+1];
n--;
}
}
}
for(i=0;i<n;i++)
printf("%d ",a[i]);
} 
