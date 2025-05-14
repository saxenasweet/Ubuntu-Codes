/*Write a code to print this pattern:
W-<st[0]
WE st[0] st[1]
WEL st[0] st[1] st[2]
WELC
WELCO
WELCOM
WELCOME

Input:
a string - "WELCOME"

*
**
***
****

Input: Number of rows

st="WELCOME"
W<-st[0]
*/

#include<stdio.h>
#include<string.h>
void main(void)
{
int i,j,n;
char st[10];
scanf("%s",st);
n=strlen(st);
for(i=0;i<n;i++)
{
for(j=0;j<=i;j++)
{
printf("%c",st[j]);
}
printf("\n");
}
}
