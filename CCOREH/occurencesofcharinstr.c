#include<stdio.h>
void main(void)
{
char st[50],ch;
int flag=0;
gets(st);
scanf("%c",&ch);
for(int i=0;st[i]!='\x0';i++)
{
if(ch==st[i])
{
 printf("%c found at location %d\n",ch,i);
// flag=1;
}
}
if(flag==0)
 printf("%c not found in %s\n",ch,st);
}

