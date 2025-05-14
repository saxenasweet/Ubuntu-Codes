#include<stdio.h>
void main(void)
{
int a,b; //Indentation
scanf("%d %d",&a,&b);
if(a>b)
printf("\n%d is greatest",a);
else if(b>a)
printf("\n%d is greatest",b);
else
printf("\nBoth numbers are same...");
}
