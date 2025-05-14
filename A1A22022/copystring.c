#include<stdio.h>
void main(void)
{
char i[30],j[30];
int k;
printf("Enter a string?"); 
scanf("%s",i);
for(k=0;i[k]!='\x0';k++)
{
j[k]=i[k]; //when k is 0 ,j[0]=i[0] then j[1]=i[1] ...till u dnt reach endofstring
}
j[k]='\x0'; //last character of any string is '\x0'
printf("The copied string is %s\n",j);
}
