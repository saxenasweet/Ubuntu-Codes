#include<stdio.h>
#include<math.h>
void main(void)
{
int bin,dec=0,r,t,i=0;
float p;
scanf("%d",&bin);
t=bin;
while(bin>0)
{
r=bin%10;
dec=dec+(pow(2,i)*r);
i++;
bin=bin/10;
}
printf("The value of binary %d is %d\n",t,dec);
}

