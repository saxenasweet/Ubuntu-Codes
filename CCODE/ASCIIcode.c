#include<stdio.h>
void main(void)
{
char ch='A';
while(ch<='Z')
{
printf("%c->%d\n",ch,ch);
ch++; // ch=ch+1 Implicit Data Type Conversion
}
ch='a';
while(ch<='z')
{
printf("%c->%d\n",ch,ch);
ch++;
}
ch='0';
while(ch<='9')
{
printf("%c->%d\n",ch,ch);
ch++;
}
}
//ASCII - American Standard Code for Information Interchange
//'0' 0 0.000000 are different data type values - char,int,float
