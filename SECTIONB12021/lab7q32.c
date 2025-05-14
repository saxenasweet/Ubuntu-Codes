#include<stdio.h>
void main(void)
{
char ch[30];
char newch[30];
int i,j=0;
printf("Enter a string?");
scanf("%[^\n]s",ch);
for(i=0;ch[i]!='\x0';i++)
{
if(ch[i]!=' ')
{
newch[j]=ch[i]; //Copy to new string newch
j++;
}
}
newch[j]='\x0';
printf("The new string without blank spaces is %s and has %d characters\n",newch,j);
}
/*
ch="he goes"
ch[0]='h'
newch[0]='h'
ch[1]='e'
newch[1]='e'
ch[2]=' '
ch[3]='g'
newch[2]='g'
and so on
*/
