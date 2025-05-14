#include<stdio.h>
void main(void)
{
char *s,*t,d;
int n,j,k;
scanf("%d",&n);
scanf("%c",&d);
s=(char *)malloc(n);
t=(char *)malloc(n);
gets(s);
puts(s);
for(j=n-1,k=0;j>=0;j--,k++)
 t[k]=s[j];
t[k]='\x0';
for(j=0;j<n;j++)
 s[j]=t[j];
s[j]='\x0';
puts(s);
}
