#include<stdio.h>
#include<ctype.h>
void main(void)
{
char ch[20];
int i;
scanf("%s",ch);//gets(ch);
for(i=0;ch[i]!='\x0';i++)
{
if(isalpha(ch[i])) //if((isupper(ch[i]))||(islower(ch[i])))
{
if(isupper(ch[i]))
 ch[i]+=32;
else
 ch[i]-=32;
}
}
puts(ch);
}


