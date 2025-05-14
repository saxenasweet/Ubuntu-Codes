#include<stdio.h>
void main(void)
{
int freq,i;
char ch;
char text[100];
gets(text);
for(ch='a';ch<='z';ch++)
{
for(i=0;text[i]!='\x0';i++)
{
if(ch==text[i])
 freq++;
}
if(freq!=0)
{
 printf("%c:",ch);
 for(int k=0;k<freq;k++)
  printf("*");
}
if(freq!=0)
 printf("\n");
freq=0;
}
}

