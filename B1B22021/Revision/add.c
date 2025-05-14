#include<stdio.h>
void main(void)
{
int a,b,c;
a=4;
b=6;
c=a%b;
printf("%d",c);
}
/*
RULE 1:
A variable name should always start with either an alphabet or an underscore _
RULE 2:
A variable name cannot start with a number or a special character
RULE 3:
A variable name can not be a KEYWORD ( Keywords are reserved words with a special 
meaning. There are around 32 keywords in C)
E.g.
12ab
!abc
ab cd
ab$cd
ab.cd
Are all invalid variable names
_ab
_a12
_ab_a
Are all valid variable names
*/
