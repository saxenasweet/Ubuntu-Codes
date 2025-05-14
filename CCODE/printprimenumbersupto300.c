#include<stdio.h>
void main(void)
{
int number;
int factors=0;
int loop,loop1;
printf("\nHow many numbers to check for primality?");
scanf("%d",&number);

for(loop1=1;loop1<=number;loop1=loop1+1)
{
for(loop=1;loop<=loop1;loop=loop+1)
{
if(loop1%loop==0)
  factors=factors+1;
}
if(factors==2)
  printf("\nNumber is prime:%d",loop1);
factors=0;
}
}
