/*Write a code to print the following pattern:
   *
  ***
 *****
*******
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
for(s=1;s<=(f*2)-1;s=s+1)
 printf("*");
printf("\n");
t=t-1;
}
}

