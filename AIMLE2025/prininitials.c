#include<stdio.h>
void main(void)
{
char st[30];
int loop;
printf("Enter you full name?");
scanf("%[^\n]s",st);
printf("The initials of your name are %c",st[0]);
for(loop=0;st[loop]!='\x0';loop++)
{
if((st[loop]==' ' )&&(st[loop+1]!=' '))
 printf("%c",st[loop+1]);
}
}
