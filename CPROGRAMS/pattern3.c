/* Multi line comment
Output:
     *
    ***
   *****
  *******
 *********
***********

   *
  ***
 *****
*******
Pattern of askteriks
Input : Number of rows
*/
// Single line comment
//Made by Kshitiz Saxena
//On 15 Oct 2020
//n=5
//*****
#include<stdio.h>
void main(void)
{
int n,i,j,spaces,t;
scanf("%d",&n);
for(j=1;j<=n;j=j+1)
{
printf("\n");
t=n-j; //Number of spaces - single line comment
for(spaces=t;spaces>=0;spaces=spaces-1)
{
printf(" ");
}
for(i=1;i<=((j*2)-1);i=i+1)
{
printf("*");
}
}
}
//nested for loop
