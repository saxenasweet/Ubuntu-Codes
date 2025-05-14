#include<stdio.h>
//1!+2!+3!+....+n!
void main(void)
{
int n;
int loop;
int sum=0;
int fact(int x);
scanf("%d",&n);
for(loop=1;loop<=n;loop++)
{
sum=sum+fact(loop);
}
printf("The sum of series is %d\n",sum);
}
int fact(int x)
{
int f=1;
int l;
for(l=1;l<=x;l++)
 f=f*l;
return f;
}

