/* Multi line comment
Output:
1
01
010
1010
10101
010101


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
int n,i,j,d=1;
scanf("%d",&n);
for(j=1;j<=n;j=j+1)
{
printf("\n");
for(i=1;i<=j;i=i+1)
{
printf("%d",d);
if(d==1)
  d=0;
else
  d=1;
}
}
}
//nested for loop
