#include<stdio.h>
void main(void)
{
int n;
int loop;
int r;
scanf("%d",&n);
for(loop=1;loop<=n;loop=loop+1)
{
r=n%loop;
if(r==0)
 printf("%d ",loop);
}
}

