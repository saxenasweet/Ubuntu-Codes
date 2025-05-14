#include<stdio.h>
void main(void)
{
char st[30],nst[30];
int n,nn=0;
scanf("%s",st);
for(n=0;st[n]!='\x0';n++)
{
if((st[n]!='a')&&(st[n]!='e')&&(st[n]!='i')&&(st[n]!='o')&&(st[n]!='u'))
{
nst[nn]=st[n];
nn++;
}
}
nst[nn]='\x0';
printf("The new string without vowels is %s\n",nst);
}

