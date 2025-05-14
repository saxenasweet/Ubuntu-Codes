#include<stdlib.h>
#include<stdio.h>
void main(void)
{
int n; //4 bytes is reserved  
int loop;//4 bytes is reserved
int *a; //a is an integer pointer - 4 bytes is reserved
printf("Enter how many numbers you want to store?");
scanf("%d",&n);
a=(int *)malloc(n*sizeof(int)); //memory to store n integer is allocated and the address of the first integer is stored in a
//a is pointing to the first intger
printf("Now enter the numbers:\n");
for(loop=0;loop<n;loop++)
{
scanf("%d",a);
a++; //forwarding the pointer 
}
//Where is a pointing to ?
a--; //Now the pointer is pointing to the last number -Rewinding a pointer
printf("Printing the numbers in reverse order:\n");
for(loop=0;loop<n;loop++)
{
printf("%d",*a); //value that a points to
a--; //Point to Previous number
}
//Where is a pointing to ?
//free(a); //what will happen now? The memory will not be de allocated 
a++; //Point to the first number
printf("\nNow the pointer points to %d\n",*a);
free(a); //deallocates memory allocated  to store n integers
}
 


