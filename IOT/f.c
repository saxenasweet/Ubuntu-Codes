#include<stdio.h>
void main(void)
{
char st[10]="hello";
void rev(char *p);
rev(&st[0]);
}
void rev(char *p)
{
int t;
for(t=0;p[t]!='\x0';t++);
t--;
while(t>=0)
{
printf("%c",p[t]);
t--;
}
}

