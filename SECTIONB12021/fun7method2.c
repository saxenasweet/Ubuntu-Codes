//Write a function to print length of the string using pointers
#include<stdio.h>
void main(void)
{
int strlength(char *s); //strlength is a function accepting a character pointer and returns an integer
int length;
char str[30];
printf("Enter a string?");
scanf("%[^\n]s",str);
length=strlength(&str[0]);  //&str[0] - is the address of the first character of the string
printf("The string %s has %d characters\n",str,length);
}
int strlength(char *s)
{
int l=0;
while(*s!='\x0') //*s -> character that s points to 
{
 l++;
 s++; //now s points to the next character - Forwarding a pointer
}
return l;
}

