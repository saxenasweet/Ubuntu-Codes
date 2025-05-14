#include<stdio.h>
void main(void)
{
char vow[6]="aeiou";
char st[100];
int count=0,i,j;
printf("Enter a string?");
scanf("%s",st);
for(j=0;vow[j]!='\x0';j++)
{
for(i=0;st[i]!='\x0';i++)
{
if(vow[j]==st[i])
 count++;
}
printf("\n%c->%d",vow[j],count);
count=0;
}
}

