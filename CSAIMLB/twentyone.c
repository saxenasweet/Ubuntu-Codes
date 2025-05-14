#include<stdio.h>
void main(void)
{
int n,g,a,c;
scanf("%d",&n); //Total number of terms
scanf("%d",&a); //Enter the first number
g=a; //Assume the first number is the greatest number
for(c=1;c<n;c++) //enter the remaining n-1 terms
{
scanf("%d",&a);
if(g<a)
 g=a;
}
printf("Greatest of %d numbers is %d\n",n,g);
}
