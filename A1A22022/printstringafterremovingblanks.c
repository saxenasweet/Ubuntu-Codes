/*
Input :
He goes    to BIT
Output:
HegoestoBIT
*/
#include<stdio.h>
void main(void)
{
char st[80];
int i;
printf("Enter a string?");
gets(st); //scanf("%[^\n]s",st);
printf("Printing string without spaces:");
for(i=0;st[i]!='\x0';i++)
{
if(st[i]!=' ')
 printf("%c",st[i]);
}
printf("\n");
}

