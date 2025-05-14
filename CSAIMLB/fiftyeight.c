#include<stdio.h>
void main(void)
{
int a[5]={1,2,3,4,5};
int loop;
//Array is a collection of values of the same data type
//Memory addresses allocated to elements of the array are contiguous
for(loop=0;loop<5;loop++)
printf("%x\n",&a[loop]);
}
