//Sorting - Arrange numbers in order - ascending or descending
//Sort 4 numbers 1,2,3,4 - Descending order
//Output - 4,3,2,1
//1,2,3,4
//2,1,3,4
//3,1,2,4
//4,1,2,3
//4,2,1,3
//4,3,1,2
//4,3,2,1
//The list is sorted
//Bubble Sort , Selection Sort, Insertion Sort etc - ways of sorting
//Question - Ask the user to enter N numbers and arrange them in descending order
#include<stdio.h>
void main(void)
{
int a[20]; //Maximum numbers a user will enter is 20
int n,temp;
int i,o;
printf("How many numbers you want to sort?");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("a[%d]?",i);
scanf("%d",&a[i]);
}
//Sort them logic
for(i=0;i<n;i++)
{
for(o=i+1;o<n;o++)
{
if(a[i]<a[o])
{//Swap
temp=a[i];
a[i]=a[o];
a[o]=temp;
}
}
}
printf("Sorted list is \n");
for(i=0;i<n;i++)
 printf("%d ",a[i]);
}


