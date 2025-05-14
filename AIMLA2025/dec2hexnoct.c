#include<stdio.h>
#include<stdlib.h>
void main(void)
{
int a;
printf("Enter a number?");
scanf("%d",&a);
if(a<=0)
{
 printf("Error in input...enter a positive number only\n");
 exit(0); //Program will end immediately
}
printf("Hexadecimal equivalent of %d is %x\n",a,a);
printf("Octal equivalent of %d is %o\n",a,a);
}
