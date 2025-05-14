#include<ctype.h>
#include<stdio.h>
void main(void)
{
char st[30];
int i;
gets(st);
for(i=0;st[i]!='\x0';i++)
{
if((st[i]!=' ')&&(((st[i]>='a')&&(st[i]<='z'))||((st[i]>='A')&&(st[i]<='Z'))))
{
if((st[i]>='A')&&(st[i]<='Z'))
 st[i]+=32; //Implicit data type conversion
else
 st[i]-=32;
}
}
puts(st);
}

