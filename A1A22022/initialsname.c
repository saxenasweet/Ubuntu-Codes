/*
st1='Amit Kumar Singh'
Output:
AKS
st1[0]='A' ->print
st1[1]=' '? No
st1[2]=' '?No
st1[3]=' '?No
st1[4]=' '?Yes
st1[4+1] ->print
keep doing it till end of string->\x0
*/
#include<stdio.h>
void main(void)
{
char st1[30];
int i;
gets(st1);
printf("%c",st1[0]);
for(i=1;st1[i]!='\x0';i++)
{
if((st1[i]==' ')&&(st1[i+1]!=' '))
 printf("%c",st1[i+1]);
}
printf("\n");
}

