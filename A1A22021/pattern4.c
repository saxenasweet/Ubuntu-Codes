//Write a code to ask the user to enter a name and print the following pattern
//E.g.
//Enter Name?Amit
//Output:
//A
//Am
//Ami
//Amit
#include<stdio.h>
void main(void)
{
char st[20];
int i,o;
printf("Enter your first name?");
scanf("%s",st);
for(o=0;st[o]!='\x0';o++)
{
for(i=0;i<=o;i++)
 printf("%c",st[i]);
printf("\n");
}
}

