/*
Print the following pattern:
    *
   **
  ***
 ****
*****

     *
    ***
   *****
  *******
 *********
*/

#include<stdio.h>
void main(void)
{
int n;
int blanksp;
int l1;
int l2;
int blanks;
scanf("%d",&n);
blanksp=n-1;
for(l1=1;l1<=n;l1=l1+1)
{
for(blanks=1;blanks<=blanksp;blanks=blanks+1)
{
printf(" ");
}
for(l2=1;l2<=l1;l2=l2+1)
{
printf("*");
}
blanksp=blanksp-1;
printf("\n");
}
}

