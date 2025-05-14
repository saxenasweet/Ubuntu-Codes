#include<stdio.h>
void main(void)
{
char ch1,ch2;
char st[30];
gets(st);
int i;
for(ch1='A',ch2='a';ch1<='Z',ch2<='z';ch1++,ch2++)
{
for(i=0;st[i]!='\x0';i++)
{
 if(st[i]==ch1)
  putc(ch1,stdout); //printf("%c",ch);
 if(st[i]==ch2)
  putc(ch2,stdout);
}
}
}

