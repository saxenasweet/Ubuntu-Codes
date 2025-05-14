/*
1
12
123
1234
12345
*/
#include<stdio.h>
void main(void)
{
int i,j,n;
char c='+';
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
 printf("%c",c);
 if(c=='+')
  c='-';
 else
  c='+';
}
printf("\n");
}
}

