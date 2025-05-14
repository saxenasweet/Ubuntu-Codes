//Code to count the number of vowels in a string 
//Assume that all characters in the string are in lower case.
#include<stdio.h>
void main(void)
{
char st[30],ch;
int nv=0,nc=0,i;
printf("Enter a string?");
scanf("%s",st);
for(i=0;st[i]!='\x0';i=i+1)
{
if((st[i]=='a')||(st[i]=='e')||(st[i]=='i')||(st[i]=='o')||(st[i]=='u'))
 nv=nv+1;
else
{
for(ch='a';ch<='z';ch=ch+1)
{
if(ch==st[i])
{
 nc=nc+1;
}
}
}
}
printf("\nThere are %d vowels and %d consonants\n",nv,nc);
}

