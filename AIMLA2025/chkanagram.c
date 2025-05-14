#include<stdio.h>
#include<string.h>
int main(void)
{
char st1[30],st2[30],tmp1[30],tmp2[30];
char alpha;
int i,j=0,k=0;
scanf("%s %s",st1,st2); //Assume all input is in lower case
for(alpha='a';alpha<='z';alpha++)
{
for(i=0;st1[i]!='\x0';i++)
{
if(st1[i]==alpha)
{
tmp1[j]=alpha;
j++;
}
if(st2[i]==alpha)
{
tmp2[k]=alpha;
k++;
}
}
}
tmp1[j]='\x0';
tmp2[j]='\x0';
if(strcmp(tmp1,tmp2)==0)
 printf("Strings are anagrams\n");
else
 printf("Strings are not anagrams\n");
}
