//BINARY to DECIMAL
//101 -> ?
// 1    0   1
// 2^2 2^1 2^0
// 4    0   1
//5
//11011 -> ?
#include<stdio.h>
#include<math.h>
void main(void)
{
int b,d=0,p=0,bt;
printf("Enter a number in binary?");
scanf("%d",&b);
bt=b;
while(bt>0)
{
d=d+pow(2,p)*(bt%10);
p++;
bt=bt/10;
}
printf("\nThe decimal of %d is %d\n",b,d);
}

