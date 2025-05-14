/*
    *
   **
  ***
 ****
*****
    1
   12
  123
 1234
12345
*/
#include<stdio.h>
void main(void)
{
int n;
int blanks,spaces;
int i,j;
scanf("%d",&n);
blanks=n-1;
for(j=1;j<=n;j=j+1) //Nested Loop
{
for(spaces=1;spaces<=blanks;spaces=spaces+1)
{
printf(" ");
}
for(i=1;i<=j;i=i+1)
{
printf("%d",i);
}
printf("\n");
blanks=blanks-1;
}
}
