#include<stdio.h>
void main(void)
{
char st[30];
char ch='a';
int c=0;
printf("Enter a string?");
scanf("%s",st);
printf("The sorted chars of the string are:");
for(;ch<='z';ch++)
{
for(int temp=0;st[temp]!='\x0';temp++)
{
if(ch==st[temp])
 c++;
}
if(c!=0)
 printf("The alphabet %c occurs %d times\n",ch,c);
c=0;
}
printf("\n");
}
