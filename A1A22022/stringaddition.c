/*
Input:
hello
welcome
Output:
hellowelcome ->String Addition is aka String Concatenation
*/
#include<stdio.h>
#include<string.h>
void main(void)
{
char st1[400],st2[200];
printf("Enter String 1?");
gets(st1);
printf("Enter String 2?");
gets(st2);
strcat(st1,st2);
printf("The concantenated string is %s\n",st1);
}

