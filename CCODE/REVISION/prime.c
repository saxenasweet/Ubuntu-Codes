#include<stdio.h>
void main(void)
{
int n;
int loop,r;
int factor=0;
printf("\nEnter a number you want me to check for PRIMALITY?");
scanf("%d",&n);
for(loop=1;loop<=n;loop=loop+1)
{
r=n%loop;
if(r==0)
 factor=factor+1;
}
if(factor==2)
 printf("Number is Prime\n");
else
 printf("Number is composite\n");
}

