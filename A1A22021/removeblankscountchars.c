#include<stdio.h>
#include<string.h>
void main(void)
{
char st[50],temp[50];
int l,m=0;
//st="he goes to BIT"
//temp="hegoestoBIT"
printf("Enter a string?");
scanf("%[^\n]s",st);
for(l=0;st[l]!='\x0';l++)
{
if(st[l]!=' ') //copy if you dont get a blank char
{
 temp[m]=st[l];
 m++;
}
}
temp[m]='\x0';
//st=temp will not work
strcpy(st,temp);
printf("\nThe string without spaces is %s and has %d characters \n",st,m);
}

