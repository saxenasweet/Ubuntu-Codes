#include<stdio.h>
void main(void)
{
char st[100];
char vow[5]="aeiou";
int i,j=0,cvow=0;
scanf("%[^\n]s",st);
for(i=0;i<5;i++)
{
while(st[j]!='\x0')
{
if(vow[i]==st[j])
 cvow++;
j++;
}
printf("%c occurs %d times\n",vow[i],cvow);
j=0;
cvow=0;
}
}

