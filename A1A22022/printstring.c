#include<stdio.h>
void main(void)
{
char nam[30]; //Amit nam[0]='A' nam[1]='m' nam[2]='i' nam[3]='t' nam[4]='\x0'
int i;
printf("Enter your name?");
//scanf("%[^\n]s",nam);
gets(nam);
for(i=0;nam[i]!='\x0';i++)
{
 printf("%c\n",nam[i]);
}
}
