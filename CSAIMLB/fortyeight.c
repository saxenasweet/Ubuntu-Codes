#include<stdio.h>
void main(void)
{
char st[30],nst[30];
int i;
gets(st);
gets(nst);
i=strcmp(st,nst);
if(i==0)
 printf("Strings are Palindromes\n");
else
 printf("Strings are not Palindromes\n");
//if st is less than nst -> negative value
//if st is greater than nst -> positive value
//if st and nst are same -> 0
}
