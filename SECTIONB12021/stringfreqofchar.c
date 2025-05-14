/*
INPUT:
Enter a string?hello
OUTPUT:
e occurs 1 times
h occurs 1 times
l occurs 2 times
o occurs 1 times
*/
#include<stdio.h>
void main(void)
{
//Input is in lower case
char st[30],ch;
int freq=0,i;
printf("Enter a string?");
scanf("%s",st);
for(ch='a';ch<='z';ch=ch+1)
{
for(i=0;st[i]!='\x0';i=i+1)
{
if(ch==st[i])
 freq=freq+1;
}
if(freq!=0)
 printf("%c occurs %d times\n",ch,freq);
freq=0;
}
}
