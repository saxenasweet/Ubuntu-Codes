#include<stdio.h>
void main(void)
{
int n,num,greatest,loop;
scanf("%d",&n);
scanf("%d",&greatest);
for(loop=1;loop<=n-1;loop=loop+1)
{
scanf("%d",&num);
if(num>greatest)
 greatest=num;
}
printf("%d",greatest);
}

