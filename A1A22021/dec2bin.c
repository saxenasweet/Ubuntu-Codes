#include<stdio.h>
void main(void)
{
int dec;
int temp;
int r;
int bin[10];
int loc=0;
printf("Enter a number in decimal number system?");
scanf("%d",&dec);
temp=dec;
printf("Number in binary number system is :");
while(temp!=0)
{
r=temp%2;
bin[loc]=r;
loc++;
temp=temp/2;
}
printf("\nThe number of binary digits are %d\n",loc);
temp=loc-1;
printf("The number in binary is :");
while(temp>=0)
{
printf("%d",bin[temp]);
temp--;
}
printf("\n");
}


