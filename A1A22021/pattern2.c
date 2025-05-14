/*
Write a code to print the following pattern:
      1
     12
    123
   1234
  12345
 123456
1234567
Here the number of rows come as an input from the user
*/
#include<stdio.h>
void main(void)
{
int n,f,s,t,spaces;
printf("Enter how many rows you want to print?");
scanf("%d",&n);
t=n-1;
for(f=1;f<=n;f=f+1)
{
for(spaces=1;spaces<=t;spaces=spaces+1)
 printf(" ");
for(s=1;s<=f;s=s+1)
{
printf("%d",s);
}
printf("\n");
t=t-1;
}
}

