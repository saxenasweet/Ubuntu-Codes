//ask the user to enter the number of stars she wants to disply and print them
#include<stdio.h>
void main(void)
{
int n;
int loop=1;
scanf("%d",&n);
do
{
printf("*");
loop=loop+1;
}while(loop<=n);
printf("\n");
}

