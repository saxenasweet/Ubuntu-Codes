/*
Write a function to print the length of the string
*/
#include<stdio.h>
char st[30]; //global variable
void main(void)
{
int length;
int stringlength(void);
printf("Enter a string?");
scanf("%[^\n]s",st);
length=stringlength(); //Function call
printf("\nThere are %d characters in %s\n",length,st);
}
int stringlength(void)
{
int l=0;
while(st[l]!='\x0') 
{
l++;
}
return l; //return string length 
}

