#include<stdio.h>
void main(void)
{
void str(char *s);
char st[]="hello";
str(&st[0]);
}
void str(char *s)
{
while (*s!='\x0')
{
 printf("%c",*s);
 s++; //Forwarding a pointer
}
}

