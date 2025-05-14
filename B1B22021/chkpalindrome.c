#include<stdio.h>
#include<string.h>
void main(void)
{
/*
 st="madams"
st[0]='m'
st[1]='a'
st[2]='d'
st[3]='a'
st[4]='m'
st[5]='s'
newst="smadam"
newst[0]='s'
st[5]='s'
newst[1]='m'
newst[4]='m'
*/
char st[30],newst[30];
int i,j,l;
gets(st);
i=strlen(st);
l=i-1;
/*newst[0]=st[i-1]
newst[1]=st[i-2]*/
for(j=0;j<=i-1;j++)
{
newst[j]=st[l];
l--;
}
newst[i]='\x0';
puts(newst);
if(strcmp(st,newst)==0)
 printf("String is a palindrome\n");
else
 printf("String is not a palindrome\n");
}


