#include<stdio.h>
void main(void)
{
int num,loop,f=0,t;
//scanf("%d",&num);
for(num=1;num<100;num++)
{
t=num;
while(t>0)
{
if(num%t==0)
 f++;
t--;
}
if(f==2)
 printf("%d is prime \n",num);
//else
// printf("%d is composite\n",num);
f=0;
}
}
