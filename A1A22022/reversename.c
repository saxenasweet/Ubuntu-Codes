/*
Input:
AMIT
Output:
TIMA

Input:
MADAM or MALAYALAM
OUTPUT:
MADAM or MALAYALAM
If the reverse of the string is the same as the original string,
it is called a PALINDROME

char a[20]; //this is a string of 20 characters
a[0] ->is the first character
a[1] ->second char
.
.
a[19] ->last char
INPUT:
HI
a[0]='H'
a[1]='I'
a[2]='\x0' -> NULL ->End of String
*/
#include<stdio.h>
#include<string.h>
void main(void)
{
char st[20],revst[20];
int l,m=0;
printf("Enter a string?");
scanf("%s",st);
for(l=0;st[l]!='\x0';l=l+1);
printf("Length of String is %d\n",l);
l=l-1; //Because we want to print the last character
while(l>=0)
{
revst[m]=st[l];
l=l-1;
m=m+1;
}
revst[m]='\x0';
printf("The reversed string is %s\n",revst);
if(strcmp(st,revst)==0)
 printf("String is a PALINDROME\n");
else
 printf("String is not a PALINDROME\n");
}

