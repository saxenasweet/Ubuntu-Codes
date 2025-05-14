//Input:
//BITMeerut
//Output:
//BITMeerut has 9 characters
/*
Concept:
Every string has the last character which is NULL - '\x0'
*/
//st="BITMEERUT"
//st[0]='B'
//st[1]='I'
//st[8]='T'
//st[9]='\x0'
#include<stdio.h>
void main(void)
{
char st[20];
int count;
printf("Enter a string?");
scanf("%[^\n]s",st);
for(count=0;st[count]!='\x0';count=count+1);
printf("The string %s has %d characters\n",st,count);
}
