#include<stdio.h>
void main(void)
{
int num,r,loop,tf=0;
for(num=1;num<=100;num++)
{
//scanf("%d",&num);
for(loop=1;loop<=num;loop++)
{
r=num%loop;
if(r==0)
  tf++;
}
if(tf==2)
  printf("%d is Prime\n",num);
//else
// printf("%d is Composite\n",num);
tf=0;
}
}
