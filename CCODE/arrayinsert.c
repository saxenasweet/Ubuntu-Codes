
//Q. Write a code for inserting an element at ith location in an array
/*
12 23 4 46 12
Array of 5 numbers
Insert a number entered by the user at nth Location
E.g. 
Inputs:
50
Insert at 3rd location
Output:
12 23 50 4 46 12

Q. Write a code to delete a number at ith location for a given array.
Given:
12 23 4 46 12
Array of 5 numbers
Input:
Location 3
Output:
12 23 46 12
*/
#include<stdio.h>
void main(void)
{
int a[10],num;
int i,j;
printf("\nEnter 5 numbers?");
for(i=0;i<5;i++)
{
printf("\nEnter a number a[%d]?",i);
scanf("%d",&a[i]);
}
printf("\nEnter the number you want to insert?");
scanf("%d",&num);
printf("\nEnter the index where the number has to be inserted?");
scanf("%d",&j);
for(i=4;i>=j;i--)
{
a[i+1]=a[i]; //Shifting numbers
}
a[j]=num;
printf("\nThe new list is:");
for(i=0;i<6;i++)
{
printf(" %d",a[i]);
}
printf("\n");
}
/*

//Array - Memory Allocation
// Compile Time : Static Memory Allocation -> Fixed  e.g. int a[5]
//Or at RUN TIME : Dynamic Memory Allocation -> Change e.g. int *a; -> a is an integer pointer
12
23
4 <- 50 INDEX 2
46 <-INDEX 3
12 <- INDEX 4
*/
