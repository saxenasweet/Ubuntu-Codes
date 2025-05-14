#include<stdio.h>
void main(void)
{
int n;
printf("Enter a number?");
scanf("%d",&n);
printf("%o\n%x\n",n,n); //%o -> Format Specifier for Octal
//%x -> Format Specifier for hexa Decimal
}
