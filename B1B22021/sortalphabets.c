#include<stdio.h>
void main(void)
{
char c;
int d;
char st[30];
gets(st);
for(c='A';c<='Z';c++)
{
for(d=0;st[d]!='\x0';d++)
{
if(c==st[d])
 printf("%c",c);
}
}
}
