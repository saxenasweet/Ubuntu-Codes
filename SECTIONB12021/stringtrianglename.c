/*
Input :
Enter your name? AMIT
Output :
A
AM
AMI
AMIT
*/
#include<stdio.h>
void main(void)
{
char st[30];
int i,j;
printf("Enter your first name?");
scanf("%s",st);
for(i=0;st[i]!='\x0';i=i+1)
{
for(j=0;j<=i;j=j+1)
{
printf("%c",st[j]);
}
printf("\n");
}
}
