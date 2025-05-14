#include<stdio.h>
void main(void)
{
int t;
char st[50],ch;
printf("Enter a string?");
scanf("%s",st);
printf("Sorted string is:");
for(ch='A';ch<='Z';ch++)
{
for(t=0;st[t]!='\x0';t++)
{
 if(ch==st[t])
  printf("%c",st[t]);
}
}
}

