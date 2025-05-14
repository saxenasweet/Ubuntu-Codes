#include<stdio.h>
void main(void)
{
int i=1;
int n;
printf("Enter a number whose table you want?");
scanf("%d",&n);
X: //Label
printf("%dX%d=%d\n",n,i,i*n);
i=i+1;
if(i<=10) goto X;
}

