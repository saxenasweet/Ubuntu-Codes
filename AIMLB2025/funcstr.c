#include<stdio.h>
void main(void)
{
char ch[4]="hello";
void func(char *p);
func(&ch[0]);
}
void func(char *p)
{
int s;
for(s=0;p[s]!='\x0';s++);
printf("%d\n",s);
s--;
while(s>=0)
{
 printf("%c",p[s]);
 s--;
}
}
