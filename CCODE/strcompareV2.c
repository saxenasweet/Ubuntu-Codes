#include<stdio.h>
void main(void)
{
char st1[20],st2[20];
int l1=0,l2=0;
int flag=0;
int loop;
int init;
scanf("%s",st1);
scanf("%s",st2);
while(st1[l1]!='\x0')
{
l1++;
}
while(st2[l2]!='\x0')
{
l2++;
}
if(l1>l2)
 init=l2;
else
 init=l1;
printf("\nChecking ....\n");
for(loop=0;loop<=init;loop++)
{
if(st1[loop]>st2[loop])
{
flag=1;
break;
}
else if(st1[loop]<st2[loop])
{
flag=-1;
break;
}
else
{
continue;
}
}
if(flag==1)
printf("\n%s is greater than %s",st1,st2);
else if(flag==-1)
printf("\n%s is greater than %s",st2,st1);
else
printf("\nBoth Strings are Same");
}
//st1="Hel" st2="Help" st1[0]='H' st2[0]='H' st1[1]='e' st2[1]='e' st1[2]='l' st2[2]='l'
