#include<stdio.h>
void main(void)
{
int fact(int x);
int n;
int s=0;
int loop;
scanf("%d",&n);
for(loop=1;loop<=n;loop++)
 s=s+fact(loop);
printf("%d\n",s);
}
int fact(int x)
{
int f=1;
int loop;
for(loop=1;loop<=x;loop++)
 f=f*loop;
return f;
}
