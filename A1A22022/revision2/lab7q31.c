#include<stdio.h>
void main(void)
{
int i;
char ch;
char st[30];
gets(st);
for(ch='A';ch<='Z';ch++)
{
for(i=0;st[i]!='\x0';i++)
{
if(ch==st[i])
 printf("%c",ch);
}
}
}
