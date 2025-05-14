/*
Input:
Enter how many numbers you want to enter?
7
Enter number?23
Enter number?32
Enter number?21
Enter number?13
Enter number?11
Enter number?19
Enter number?20

Output:
The greatest number is 32
*/
#include<stdio.h>
void main(void)
{
int n;
int greatest;
int number;
printf("Enter how many numbers you want to enter?");
scanf("%d",&n);
printf("Enter number?");
scanf("%d",&greatest);
n=n-1;
while(n>0)
{
printf("Enter number?");
scanf("%d",&number);
if(number>greatest)
 greatest=number;
n=n-1;
}
printf("Greatest number is %d\n",greatest);
}
