/*
Ask the user to enter a text and search for a strring in the text
Input:
Text="He goes to  the market"
Search="to"
Output: search string found in text
*/
#include<stdio.h>
#include<string.h>
void main(void)
{
char text[50];
char search[10];
printf("\nEnter text?");
//scanf("%[^\n]s",text);
//gets(text);
fscanf(stdin,"%[^\n]s",text);
//printf("\nYou entered the following text\n%s\n",text);
//puts(text);
fprintf(stdout,"%s",text);
}

