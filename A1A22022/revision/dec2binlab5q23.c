#include<stdio.h>
void main(void)
{
int bin[20],dec,index=0,loop,t,r;
scanf("%d",&dec);
t=dec;
while(dec>0)
{
r=dec%2;
bin[index]=r;
index++;
dec=dec/2;
}
index--;
printf("The number in decimal is :-");
while(index>=0)
{
printf("%d",bin[index]);
index--;
}
printf("\n");
}
