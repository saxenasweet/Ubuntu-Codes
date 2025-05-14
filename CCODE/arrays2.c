//Ask the user to enter 10 numbers. Arrange them in Increasing Order. Sorting
//Algorithm  ->  Sorting Algorithm : Bubble Sort, Insertion Sort and Selection Sort
/*
4 3 2 1 0 -> Sort 
SWAP
3 4 2 1 0
SWAP
2 4 3 1 0
SWAP
1 4 3 2 0
SWAP - Interchange
0 4 3 2 1
After round 1 , you get the smallest number at the first location
0 4 3 2 1
SWAP
0 3 4 2 1
SWAP
0 2 4 3 1
SWAP
0 1 4 3 2
After round 2 , you get the second smallest number at the second location
0 1 4 3 2
SWAP
0 1 3 4 2
SWAP
0 1 2 4 3
After round 3, you get the third smallest number at the third location
0 1 2 4 3
SWAP
0 1 2 3 4
After round 4, you get the complete list sorted
*/
#include<stdio.h>
void main(void)
{
int a[10];
int i,j,c;
for(i=0;i<10;i++)
{
printf("a[%d]?",i);
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
{
if(a[i]>a[j])
{
//Swap
c=a[i];
a[i]=a[j];
a[j]=c;
}
}
}
//List Sorted
printf("\nSorted Array is :");
for(i=0;i<10;i++)
printf("%d,",a[i]);
}
