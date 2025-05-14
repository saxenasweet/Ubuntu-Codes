/*
hello

h:*
e:*
l:**
o:*
*/

#include<stdio.h>
#include<string.h>
void main(void)
{
char st1[50];
int length,flag=0;
int freq=0;
char ch;
gets(st1);
for(ch='A';ch!='Z';ch++)
{
for(length=0;st1[length]!='\x0';length++)
{
if(ch==st1[length])
 freq++;
}
if(freq!=0)
printf("%c:",ch);
while(freq>0)
{
printf("*");
freq--;
flag=1;
}
if(flag==1)
printf("\n");
freq=0;
flag=0;
}
}
