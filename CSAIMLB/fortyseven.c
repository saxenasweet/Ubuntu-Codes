#include<stdio.h>
void main(void)
{
char st[30],rst[30];
int i,last,m=0;
gets(st);
for(i=0;st[i]!='\x0';i++);
last=i;
i--;
while(i>=0)
{
 rst[m]=st[i];
 i--;
 m++;
}
rst[last]='\x0';
if(strcmp(st,rst)==0)
 printf("String is a  Palindromes\n");
else
 printf("String is not a Palindromes\n");
printf("\n");
}

