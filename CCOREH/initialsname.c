#include<stdio.h>
void main(void)
{
char nam[30];
gets(nam);
printf("The initials are:%c",nam[0]);
for(int i=1;nam[i]!='\x0';i++)
{
if((nam[i]==' ')&&(nam[i+1]!=' '))
 printf("%c",nam[i+1]);
}
}

