#include<string.h>
#include<stdio.h>
void main(void)
{
char st[30],ct[30];
int l,m=0,c;
gets(st);
for(l=0;st[l]!='\x0';l++);
printf("%d\n",l);
l=l-1;
while(l>=0)
{
ct[m]=st[l];//Copy one character at a time
l--;
m++;
}
ct[m]='\x0';//The last character of every string is NULL
puts("The reverse string is");
puts(ct);
c=strcmp(st,ct);
if(c==0)
 printf("String is palindrome");
else
 printf("String is not a palindrome");
printf("\n");
}
