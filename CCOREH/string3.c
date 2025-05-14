#include<stdio.h>
#include<string.h>
void main(void)
{
char st1[30],st2[30];
/*
st1="hello" st1[0]='h' st1[1]='e' st1[2]='l' st1[3]='l' st1[4]='o'
st2="olleh" st2[0]='o' st2[1]='l' st2[2]='l' st2[3]='e' st2[4]='h'
*/
scanf("%s",st1);
int loop,t,q=0;
for(loop=0;st1[loop]!='\x0';loop++);
t=loop-1;
while(t>=0)
{
st2[q]=st1[t];
q++;
t--;
}
st2[q]='\x0';
printf("The reverse string is %s\n",st2);
if(strcmp(st1,st2)==0)
 printf("Palindrome");
else
 printf("Not a Palindrome");
}
