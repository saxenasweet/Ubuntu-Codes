#include<stdio.h>
void main(void)
{
int N,n,greatest;
printf("Enter how many numbers?");
scanf("%d",&N);
printf("Enter a number?");
scanf("%d",&n);
greatest=n;
N=N-1;
while(N>0)
{
printf("Enter a number?");
scanf("%d",&n);
if(greatest<n)
greatest=n;
N=N-1;
}
printf("Greatest number is %d\n",greatest);
}

