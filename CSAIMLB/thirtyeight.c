#include<stdio.h>
void main(void)
{
char ch;
scanf("%c",&ch);
if(((ch>='A')&&(ch<='Z'))||((ch>='a')&&(ch<='z')))
 printf("%c is an Alphabet\n",ch);
else if((ch>='0')&&(ch<='9'))
 printf("%c is a Digit\n",ch);
else
 printf("%c is a Special Character\n",ch);
}
