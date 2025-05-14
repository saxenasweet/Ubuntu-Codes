/*
Functions are self contained block of statements that perform a specific task when called
Functions are of two types - library functions (e.g. printf(),scanf()..) and user defined
functions
*/
//Write a function to print hello
#include<stdio.h>
void main(void)
{
//main is a function that accepts nothing and returns nothing
void print(void); //Function declaration
print(); //Calling the function
}
void print(void) //Function definition
{
printf("Hello\n");
}

