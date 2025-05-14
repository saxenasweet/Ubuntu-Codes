/*
Input:
"ab cd ef  gh i"
Output:
"abcdefghi"
*/
#include<stdio.h>
void main(void)
{
char st[50];
int i,j,length;
int spaces=0;
scanf("%[^\n]s",st);
for(length=0;st[length]!='\x0';length++);
for(i=0;i<=length;i++)
{
if(st[i]==' ')
{
 spaces++;
for(j=i;j<=length;j++)
 st[j]=st[j+1];
//ength+1]='\x0';
printf("%s\n",st);
length--;
}
}
printf("\nThere were %d spaces and string without spaces is %s\n",spaces,st);
}
