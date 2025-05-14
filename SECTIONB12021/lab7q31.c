//Write a code which accepts a string in upper case only and prints the alphabets in an order
#include<stdio.h>
void main(void)
{
char st[30];
int i;
char ch;
printf("Enter a string?");
scanf("%s",st);
printf("Printing string in Alphabetical Order:\n");
for(ch='A';ch<='Z';ch++)
{
for(i=0;st[i]!='\x0';i++)
{
if(ch==st[i])
 printf("%c",ch);
}
}
printf("\n");
}

