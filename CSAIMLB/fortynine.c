#include<stdio.h>
#include<ctype.h>
void main(void)
{
char ch;
scanf("%c",&ch);
if(isupper(ch)) //if((ch>='A')&&(ch<='Z'))
 printf("Upper Case\n");
else if (islower(ch))
 printf("Lower Case\n");
else
 printf("I dont care\n");
}

