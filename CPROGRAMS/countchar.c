#include<stdio.h>
#include<string.h>
void main(void)
{
char st[20]; //String of 20 characters -Array of characters 
int l;
int m=0;
scanf("%[^\n]s",st); //"Hello"
printf("\nYou entered %s",st);
//NULL indicates the end of string
l=strlen(st); //strlen is a function that counts the number of characters in the string
printf("\nThere are %d characters in %s",l,st);
printf("\nThe first character is %c and second character is %c",st[0],st[1]);
while(st[m]!='\x0') //st[0]='H' st[1]='e' st[2]='l' st[3]='l' st[4]='o' st[5]=NULL
{
printf("\n%c",st[m]);
m=m+1;
}
printf("\nThere are %d characters in %s",m,st);
}

