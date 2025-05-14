#include<stdio.h>
#include<string.h>
void main(void)
{
char st[50],ch;
char tmp[50];
int l=0;
gets(st);
scanf("%c",&ch);
for(int i=0;st[i]!='\x0';i++)
{
if(st[i]!=ch)
{
 tmp[l]=st[i];
 l++;
}
}
tmp[l]='\x0'; //Every string must have null
strcpy(st,tmp); //Because I want this removal of repeated chars from 
//original string
puts(st);
}

