//Write a function to search for a number in an array of 10 integers
#include<stdio.h>
void main(void)
{
int search(int *p,int numtosearch); //search is a function that accepts an integer pointer and the number to search and returns an integer
int num[10]; //array of 10 integers
int loop;
int number; //number to search
int result;
for(loop=0;loop<10;loop++)
{
printf("Enter number %d?",loop+1);
scanf("%d",&num[loop]);
}
printf("\nEnter the number you want to search?");
scanf("%d",&number);
result=search(&num[0],number); //Function call
if(result!=-1)
 printf("\nThe number %d is at location %d\n",number,result);
else
 printf("\nNumber not in the list\n");
}
int search(int *p,int numtosearch)
{
int loc; 
for(loc=0;loc<10;loc++)
{
if(*p==numtosearch)
{ 
return loc+1; //if number is found
p++; //next number in the array Forwarding the pointer
}
}
return -1;
}
