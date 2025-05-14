/*
Dynamic Memory Allocation

Memory Allocation is done in two different ways-
Static Memory Allocation -> in which memory to be allocated is fixed at compile time
e.g. int a[10];
At compile time, memory for storing 10 integers is fixed -> one int takes 4 bytes, total
memory is 40 bytes
If you are storing  3 int, memory needed = 12 bytes
Total memory allocated = 40 bytes
Wastage of memory = 28 bytes is not allocated
Dynamic Memory Allocation -> memory is allocated at RUN TIME i.e. when the code is executed
Dynamic Memory Allocation is done by using four functions defined in stdlib.h
Functions are:
1. malloc
2. calloc
3. realloc
4. free
*/
#include<stdlib.h>
#include<stdio.h>
void main(void)
{
int *p;
int n;
int l;
printf("Enter how many numbers you want to store?");
scanf("%d",&n);
p=(int *)malloc(n*sizeof(int)); //p will to the start of memory block for storing n integers
if(p==NULL)
{
printf("Memory allocation failed.."); 
exit(0);
}
for(l=0;l<n;l++,p++)
{
printf("Enter a number?");
scanf("%d",p);
}
p--; //p is now pointing to the last integer
for(l=0;l<n;l++,p--)
 printf("%d ",*p);
p++; //p is now pointing to the first integer
free(p); //deallocate the memory
}

