#include<stdio.h>
void main(void)
{
char inp;
scanf("%c",&inp); //Valid
//Invalid inp='he'
//Is valid inp='1'
//'1',1,1.000000 are not same
//character,integer,float
if(((inp>='a')&&(inp<='z'))||((inp>='A')&&(inp<='Z')))
{
if((inp=='a')||(inp=='e')||(inp=='i')||(inp=='o')||(inp=='u')||(inp=='A')||(inp=='E')||(inp=='I')||(inp=='O')||(inp=='U'))
 printf("\nVowel");
else
 printf("\nConsonant");
}
else
{
printf("Wrong Input\n");
}
}
