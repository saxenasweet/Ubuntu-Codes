#include<stdio.h>
void main(void)
{
int n,number,smallest;
printf("\nEnter how many numbers you want ?");
scanf("%d",&n);
printf("\nEnter a number?");
scanf("%d",&number);
smallest=number;
n=n-1;
while(n>0)
{
printf("\nEnter a number?");
scanf("%d",&number);
if(number<smallest)
 smallest=number;
n=n-1;
}
printf("\nSmallest number is %d\n",smallest);
}


