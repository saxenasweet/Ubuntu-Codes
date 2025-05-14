#include<stdio.h>
#include<string.h>
char ch[30]; //Global variable
void main(void)
{
int length(void); //Function length accpets no argument
//And returns an integer
int d;
gets(ch); //Input a string
d=length(); //Function Call
printf("%d is the length of %s\n",d,ch);
}
int length(void) //Function Define
{
int len;
len=strlen(ch);
return(len); //return the length of the string
}
