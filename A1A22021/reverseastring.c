//comment -> internal documentation ->for programmers
//two types of comments -> single line and multi line comments
/*
'a' ->character
"ab" ->string ->2 character
'12' ->not a character ->string "12"
12, 12.00000 "12"
int   float    string
*/
#include<stdio.h>
void main(void)
{
char st[30]; //30 char string
int l;
scanf("%[^\n]s",st);
//st[0]->first char
//st[1]->second char
//st[n]->last char
//st[n+1]='\x0' String ends here
//st[0]='h'
//st[1]='e'
//st[2]='l'
//st[3]='l'
//st[4]='o'
//st[5]='\x0' NULL special char to end the string
for(l=0;st[l]!='\x0';l++);
printf("%d",l);
l=l-1;
while(l>=0)
{
printf("%c",st[l]);
l--;
}
}


