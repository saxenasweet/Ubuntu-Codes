#include<stdio.h>
void main(void)
{
char st[100];
int i,j=0;
char vow[6]="aeiou";
scanf("%[^\n]s",st);
for(i=0;i<5;i++)
{
printf("%c\n",vow[i]);
}
while(st[j]!='\x0'){
j++;
}
printf("The string has %s has %d characters\n",st,j);
}

