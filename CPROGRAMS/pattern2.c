/* Multi line comment
Output:
******
*****
****
***
**
*

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
int n,i,j;
scanf("%d",&n);
for(j=n;j>=1;j=j-1)
{
printf("\n");
for(i=1;i<=j;i=i+1)
{
printf("*");
}
}
}
//nested for loop
