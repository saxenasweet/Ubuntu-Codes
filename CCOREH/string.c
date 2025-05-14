/*
n="hello"
n[0]='h'
n[1]='e'
n[2]='l'
n[3]='l'
n[4]='o'
n[5]='\x0'->NULL
*/
#include<stdio.h>
void main(void)
{
char st[30];
int loc;
scanf("%[^\n]s",st); //gets(st)
for(loc=0;st[loc]!='\x0';loc++);
printf("Length of string %s is %d\n",st,loc);
}
