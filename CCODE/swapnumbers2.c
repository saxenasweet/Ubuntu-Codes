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
int a=3,b=6;
//SWAP THEM without using a third variable
printf("\nBefore swapping a=%d and b=%d\n",a,b);
a=a+b; //a=9
b=a-b; //b=3
a=a-b; //a=6
printf("\nAfter swapping a=%d and b=%d\n",a,b);
}
