#include<stdio.h>
void main(void)
{
int i=1;
int bin;
int dec=0;
int temp;
scanf("%d",&bin);
temp=bin;
while(temp>0)
{
dec+=(i*(temp%10));
temp/=10;
i=i*2;
}
printf("The binary number %d in decimal is %d\n",bin,dec);
}
