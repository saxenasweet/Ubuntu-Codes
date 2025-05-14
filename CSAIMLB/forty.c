#include<stdio.h>
void main(void)
{
char st[20];
scanf("%[abcdef01234]s",st);
printf("Hi %s\n",st);
scanf("%[^\n]s",st); //Stores a string with white spaces as well
printf("Hello %s\n",st);
}

