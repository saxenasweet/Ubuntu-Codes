/*
st1="abcabcab"
a***
b***
c**
*/
#include<stdio.h>
void main(void)
{
char st[30];
char ch;
int freq=0,d,e;
gets(st);
for(ch='a';ch<='z';ch++)
{
for(d=0;st[d]!='\x0';d++)
{
if(st[d]==ch)
 freq++;
}
if(freq>0)
{
printf("\n%c:",ch);
for(e=0;e<freq;e++)
 printf("*");
freq=0;
}
}
}

