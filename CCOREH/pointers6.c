#include<stdio.h>
void main(void)
{
char ch[30];
int length(char *p);
gets(ch);
printf("The number of characters in %s are %d\n",ch,length(&ch[0]));
}
int length(char *p)
{
int l=0;
while(*p != '\x0')
{
p++;
l++;
}
return (l);
}


