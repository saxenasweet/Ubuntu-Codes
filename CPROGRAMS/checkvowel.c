#include<stdio.h>
void main(void)
{
char a; //char int float for while do - KEYWORDS - RESERVED WORDS - HAVE A SPECIAL MEANING 
//There are around 32 keywords in C
scanf("%c",&a);
printf("%c is the character you entered.",a);
if((a=='a')||(a=='e')||(a=='i')||(a=='o')||(a=='u'))
 printf("\nYou entered a vowel");
else
 printf("\nYou entered a consonant");
//String is a combination of characters a="HARSH" is OK but a='HARSH' is not OK
//1,'1',1.000000 - first one is int, second one is char, third one is FLOAT
}
