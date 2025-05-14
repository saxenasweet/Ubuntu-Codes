/*
ASCII Code
American Standard Code for Information Interchange
Every character has a unique code
'A'-65 , 'B'-66 , 'C'-67
'a'-97 , 'b'-98 , 'c'-99
White space (blank space) - 32
'0'-48 , '1'-49 

UNICODE - has support for almost all languages of the world
*/
//Write a code to print ASCII Codes for alphabets
#include<stdio.h>
void main(void)
{
char c;
for(c='A';c<='Z';c=c+1)
{
printf("%c->%d ",c,c); //type casting i.e. char is changed to int  ->Implicit data type conv
}
for(c='a';c<='z';c=c+1)
{
printf("%c->%d ",c,c);
}
c=' ';
printf("\n%c->%d ",c,c);
}
