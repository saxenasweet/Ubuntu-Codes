/*
Write a code to print this pattern:
1
12
123
1234
12345
Here the number of rows come as an input from the user
*/
#include<stdio.h>
void main(void)
{
int n,f,s;
printf("Enter how many rows you want to print?");
scanf("%d",&n);
for(f=1;f<=n;f=f+1)
{
for(s=1;s<=f;s=s+1)
 printf("*");
printf("\n");
}
}
