//This is a single  line comment
/*
Enter your first name?AMAR
Output:
A
AM
AMA
AMAR
This is  a multi line comment 
*/
#include<stdio.h>
void main(void)
{
char st[30];
int i,j;
printf("Enter your first name?");
scanf("%s",st);
for(i=0;st[i]!='\x0';i++)
{
for(j=0;j<=i;j++)
{
printf("%c",st[j]);
}
printf("\n");
}
}

