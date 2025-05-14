/*
 1 1  1  0
  3 2 1 0
 2 2 2 2 
(8X1)+(4X1)+(2X1)+(1X0)
8+4+2+0 = 14
*/
#include<math.h>
#include<stdio.h>
void main(void)
{
int bin;
int dec=0;
int counter=0;
int r;
float rdec=0;
printf("Enter a number in binary?");
scanf("%d",&bin);
while(bin>0)
{
r=bin%10; //Extract the right most digit of the binary number
rdec=pow(2,counter);
counter++;
dec=dec+(r*rdec);
bin=bin/10; //Remove the right most digit of the binary number
}
printf("\nThe decimal equivalent is %d\n",dec);
}
