#include<stdio.h>
void main(void)
{
void print(int arr[]);
int a[6]={1,2,3,4,5,6};
print(a);
}
void print(int arr[])
{
int i;
for(i=0;i<6;i++)
printf("%d ",arr[i]);
}
