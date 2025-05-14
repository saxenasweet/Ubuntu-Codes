#include<stdio.h>
void main(void)
{
char ch[30],c;
int i;
scanf("%s",ch);
for(c='a';c<='z';c++)
{
for(i=0;ch[i]!='\x0';i++)
if(c==ch[i])
 printf("%c",c);
}
printf("\n");
}

