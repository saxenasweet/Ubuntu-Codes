/*
String is a combination of characters
String is also an array of characters
*/
//Write a code to input your name and print it
#include<stdio.h>
void main(void)
{
char name[20]; //an array of characters-> string
printf("Enter your name?");
scanf("%[^\n]s",name);
printf("Hello %s\n",name);
/*
'1' ->character
"Amit"->string
'12' is wrong because it has 2 characters '1' and '2' ->"12" is correct
'3.2' is wrong becuase it has 3 characters '3','.' and '2' ->"3.2" is correct
"3.2"->string , 3.2->float are different
*/
}

