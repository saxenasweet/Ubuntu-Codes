/*
Input:
hello learn to have manners
Output:
a***
e****
h**
*/
#include<stdio.h>
void main(void)
{
char st[50],ch;
int cf=0,l,cs;
printf("Enter a string?");
scanf("%[^\n]s",st);
for(ch='a';ch<='z';ch++)
{
for(l=0;st[l]!='\x0';l++)
{
if(st[l]==ch)
 cf++;
}
if(cf!=0)
{
printf("%c",ch);
for(cs=0;cs<cf;cs++)
 printf("*");
printf("\n");
}
cf=0;
}
}
