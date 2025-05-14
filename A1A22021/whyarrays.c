#include<stdio.h>
void main(void)
{
int a[100]; //Array is a collection of elements of the same data type
int sum=0;
//a[0] - >First element
//a[1] ->Second element
//a[2] ->Third element
//
//a[9] ->10th element
int loop;
int n;
printf("Enter how many numbers you want to enter?");
scanf("%d",&n);
for(loop=0;loop<n;loop=loop+1)
{
scanf("%d",&a[loop]);
sum=sum+a[loop];
}
printf("%d %f",sum,(sum*1.0)/n);
}

