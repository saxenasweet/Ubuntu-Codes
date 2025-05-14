#include<stdio.h>
void main(void)
{
char ch;
int i;
char st[30];
printf("Enter a string?");
gets(st);
printf("The string characters in alphabetical order are:");
for(ch='A';ch<='Z';ch++)
{
for(i=0;st[i]!='\x0';i++)
{
 if(st[i]==ch)
  printf("%c",ch);
}
}
printf("\n");
}
