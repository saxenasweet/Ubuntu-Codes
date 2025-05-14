#include<stdio.h>
void main(void)
{
int a[7]={1,2,3,4,5,6};
int n=6;
int number=10;
int loc=2;
int loop;
//Move all numbers from location 3 to right by one place
//To do that start from the last number and move it right and so on
for(loop=5;loop>=loc;loop--)
 a[loop+1]=a[loop];
//Now print the numbers
n++;//Now there are n+1 numbers
printf("\nThe list with one added number is:");
for(loop=0;loop<n;loop++)
printf("%d ",a[loop]);
//Copy the number to be inserted at location loc
a[loc]=number;
//Print the updated list 
printf("\nThe final list is:");
for(loop=0;loop<n;loop++)
printf("%d ",a[loop]);
}

