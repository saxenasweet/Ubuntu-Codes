#include<stdio.h>
void main(void)
{
char st[30];
int n;
printf("Enter your full name:?");
scanf("%[^\n]s",st);
printf("Initials of your name are:%c",st[0]);
for(n=0;st[n]!='\x0';n++)
{
if((st[n]==' ')&&(st[n+1]!=' '))
 printf("%c",st[n+1]);
}
printf("\n");
}

