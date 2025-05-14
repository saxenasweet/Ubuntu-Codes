#include<stdio.h>
void main(void)
{
char name[40];
void revst(char *ptr);
scanf("%s",name);
revst(&name[0]);
}
void revst(char *ptr)
{
int l;
for(l=0;ptr[l]!='\x0';l++);
while(l>=0)
{
printf("%c\n",ptr[l]);
l--;
}
}
