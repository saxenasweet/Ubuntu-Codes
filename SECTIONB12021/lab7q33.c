//Print a number in words
#include<stdio.h>
#include<string.h>
void main(void)
{
char words[10][10]={"zero","one","two","three","four","five","six","seven","eight","nine"}; //2 dimensional string
char number[10];
int loop;
int d;
/*strcpy(words[0],"zero");
strcpy(words[1],"one");
strcpy(words[2],"two");
strcpy(words[3],"three");
strcpy(words[4],"four");
strcpy(words[5],"five");
strcpy(words[6],"six");
strcpy(words[7],"seven");
strcpy(words[8],"eight");
strcpy(words[9],"nine");*/
printf("Enter the number you want me to print in words?");
scanf("%s",number); //123 number[0]='1' number[1]='2' number[2]='3' number[3]='\x0'
for(loop=0;number[loop]!='\x0';loop++)
{
d=number[loop]-48; //'1'-48 ASCII Value of '1' is 49 -> 49-48 = 1 ->data type conversion is of two types implicit and explicit
printf("%s ",words[d]); //words[1]="one"
}
printf("\n");
}

