#include<stdio.h>
void main(void)
{
char st[15]="BIT MEERUT";
int countchars(char *p);
int l;
l=countchars(&st[0]); //st[0]='B' &st[0]->address of 'B'
printf("\nThe string has %d characters\n",l);
}
int countchars(char *p)
{
int t=0;
while(*p!='\x0')
{
printf("%c",*p); //*p is value that p points to
p++;//Now p is pointing to the next char of the string
t++;
//Forwarding a pointer
}
return t;
}
//Write a code that prints number of characters in a string by using pointers
