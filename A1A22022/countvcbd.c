#include<stdio.h>
void main(void)
{
char st[80];
int v=0,c=0,d=0,b=0;
int i;
printf("Enter a string?");
gets(st); //scanf("%[^\n]s",st); st="ab 12 de"
for(i=0;st[i]!='\x0';i++)
{
if((st[i]=='a')||(st[i]=='e')||(st[i]=='o')||(st[i]=='u')||(st[i]=='i'))
 v++;
else if ((st[i]>='0')&&(st[i]<='9'))
   d++;
 else if (st[i]==' ')
        b++;
}
c=i-(v+d+b);
printf("\nVowels=%d Consonants=%d Blank spaces=%d Digits=%d\n",v,c,b,d);
}
