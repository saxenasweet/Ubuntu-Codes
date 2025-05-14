//User enters n numbers.Program prints the greatest number
#include<stdio.h>
void main(void)
{
int n;
int greatest;
int count=1;
int number;
scanf("%d",&n);
scanf("%d",&number);
greatest=number;
Label:
scanf("%d",&number);
if(number> greatest)
  greatest=number;
count=count+1;
if(count<n)
  goto Label;
printf("\nGreatest Number is %d\n",greatest);
}

