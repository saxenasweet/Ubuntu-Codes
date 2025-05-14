#include<stdio.h>
void main(void)
{
int dec,temp,count=0;
static int bin[20];
printf("Enter a number in Decimal?");
scanf("%d",&dec);
temp=dec;
while(temp>0)
{
bin[count]=temp%2;
temp/=2;
count++;
}
temp=--count;
while(temp>=0)
{
printf("%d",bin[temp]);
temp--;
}
}

