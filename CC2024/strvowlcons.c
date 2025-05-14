#include<stdio.h>
void main(void)
{
char st[100];
int i;
int v=0,c=0;
printf("Enter a string?");
scanf("%[^\n]s",st);
for(i=0;st[i]!='\x0';i++)
{
if((st[i]=='a')||(st[i]=='e')||(st[i]=='i')||(st[i]=='o')||(st[i]=='u'))
 v++;
else if((st[i]>='a')&&(st[i]<='z'))
 c++;
}
printf("\nThe total vowels are %d and consonants are %d\n",v,c);
}

