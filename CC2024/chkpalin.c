#include<stdio.h>
#include<string.h>
void main(void)
{
char ch[30],rch[30];
int i,j,k;
printf("Enter a string?");
scanf("%s",ch);
//Reverse ch
for(i=0;ch[i]!='\x0';i++);
k=i-1;
for(j=0;j<=i;j++,k--)
 rch[j]=ch[k];
rch[j-1]='\x0';
printf("%s\n",rch);
//strcpy(rch,ch)
//strrev(ch)
if(strcmp(ch,rch)==0)
 printf("Palidrome");
else
 printf("Not a palindrome");
}

