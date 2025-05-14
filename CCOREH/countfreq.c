#include<stdio.h>
void main(void)
{
char st[30];
int freq=0;
gets(st);
for(char ch='a';ch<='z';ch++) //implicit data type conversion
{
for(int m=0;st[m]!='\x0';m++)
{
if(ch==st[m])
 freq++;
}
if(freq!=0)
 printf("There are %d %c\n",freq,ch);
freq=0;
}
}
